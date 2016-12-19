#ifndef LOGGER_H
#define LOGGER_H

#include"mainwindow.h"
#include <string>
#include <iostream>
#include <fstream>

class Logger {

private:
    Logger();
    Logger(const Logger& l);
    static Logger* logger;

public:
    static void log(std::string output);
    static void log(const Patient* p, int c);
    static Logger* getLogger();
    ~Logger();

};

#endif // LOGGER_H
