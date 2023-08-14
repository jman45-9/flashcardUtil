#ifndef LOGGER_HEADER_H_
#define LOGGER_HEADER_H_

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

namespace Logger
{
    void logInit(char *logFileName);
    //New line is automatic, ie no need for newline :) ; return val of 1 means fail
    int logString(std::string logMessage);
    void closeLog();
}

#endif // LOGGER_HEADER_H_