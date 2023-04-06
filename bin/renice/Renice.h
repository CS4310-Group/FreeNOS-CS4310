#ifndef __BIN_PS_RENICE_H
#define __BIN_PS_RENICE_H

#include <POSIXApplication.h>

/**
 * @addtogroup bin
 * @{
 */

/**
 * Change scheduling priority of running processes, whether that be of one or more.
 */
class Renice : public POSIXApplication
{
  public:

    /**
     * Constructor
     *
     * @param argc Argument count
     * @param argv Argument values
     */
    Renice(int argc, char **argv);

    /**
     * Execute the application.
     *
     * @return Result code
     */
    virtual Result exec();
};

/**
 * @}
 */

#endif /* __BIN_PS_RENICE_H */
