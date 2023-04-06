#include <Types.h>
#include <Macros.h>
#include <stdio.h>
#include <unistd.h>
#include <ProcessClient.h>
#include "Renice.h"
#include "sys/renice.h"
#include <errno.h>
#include <stdlib.h>
#include <string.h>

Renice::Renice(int argc, char **argv)
    : POSIXApplication(argc, argv)
{
    parser().setDescription("Change scheduling priority of running processes, whether that be of one or more");
    parser().registerFlag('n', "priority", "change priority level of specific process");
    parser().registerPositional("PRIORITY", "change priority to this new specific level");
    parser().registerPositional("PROCESS_ID", "change priority of this specific process");
}

Renice::Result Renice::exec()
{
    if(arguments().get("priority"))
    {
        const ProcessClient process;
        ProcessID pid = (atoi(arguments().get("PROCESS_ID")));
        int priority = (atoi(arguments().get("PRIORITY")));
        
        ProcessClient::Info info;
        const ProcessClient::Result result = process.processInfo(pid, info);
        
        if(result != ProcessClient::Success)
        {
            ERROR("No process of ID '" << pid << "' is found, enter valid pid from system process list")
            return InvalidArgument;
        }
        
        if(priority > 5 || priority < 1)
        {
            ERROR("Unable to set priority level (selected level not in range 1-5) " << pid)
            return InvalidArgument;
        }
        
        renicepid(pid, priority, 0, 0);
        printf("Successfully set priority of process %d to priority level %d, from priority level %d\n", pid, priority, info.kernelState.priority);
    }

    return Success;
}
