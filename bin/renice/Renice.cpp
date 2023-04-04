#include <Types.h>
#include <Macros.h>
#include <stdio.h>
#include <unistd.h>
#include <ProcessClient.h>
#include "Renice.h"

Renice::Renice(int argc, char **argv)
    : POSIXApplication(argc, argv)
{
    parser().setDescription("Output system process list");
}

Renice::Result Renice::exec()
{
    const ProcessClient process;
    String out;

    // Print header
    out << "ID  PARENT  USER GROUP STATUS PRIORITY    CMD\r\n";

    // Loop processes
    for (ProcessID pid = 0; pid < ProcessClient::MaximumProcesses; pid++)
    {
        ProcessClient::Info info;

        const ProcessClient::Result result = process.processInfo(pid, info);
        if (result == ProcessClient::Success)
        {
            DEBUG("PID " << pid << " state = " << *info.textState);

            // Output a line
            char line[128];
            snprintf(line, sizeof(line),
                    "%3d %7d %4d %5d %10s %2d %32s\r\n",
                     pid, info.kernelState.parent,
                     0, 0, *info.textState, info.kernelState.priorityLevel, *info.command);
            out << line;
        }
    }

    // Output the table
    write(1, *out, out.length());
    return Success;
}
