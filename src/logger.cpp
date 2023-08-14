#include "../include/logger.hpp"

namespace Logger
{
    FILE *logSheetOut = NULL;

    void logInit(char *logFileName)
    {
        logSheetOut = fopen(logFileName, "w");
        if (logSheetOut == NULL)
        {
            std::cerr << "Failed to open log file\n";
            exit(1);
        }
    }


    int logString(std::string logMessage)
    {
        if (logSheetOut == NULL)
        {
            std::cerr << "Not ready to log\n";
            return 1;
        }

        const char *cLogMessage = logMessage.c_str();
        fprintf(Logger::logSheetOut,"%s\n" ,cLogMessage);

        return 1;
    }

    void closeLog()
    {
        fclose(logSheetOut);
        logSheetOut = NULL;
    }
}