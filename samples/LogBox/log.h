#ifndef LOG_H
#define LOG_H

// THESE TWO LINES ARE IMPORTANT TO TELL EASYLOGGING++ IN THIS FILE
// WHEN WE USE LOG(...) AND PERFORMANCE TRACKING IT SHOULD
// USE muflihun LOGGER RATHER THAN default LOGGER
#define ELPP_DEFAULT_LOGGER "default"
#define ELPP_DEFAULT_PERFORMANCE_LOGGER "default"

#include <residue/residue.h>

#endif // LOG_H
