#include <iostream>
#include "Log.h"

void print(const char* message) {
    std::cout << message << std::endl;
}
void InitLog() {
    print("Log is Initialized");
}

void ConsoleLog::SetLevel(State level) {
    m_LogLevel = level;
}
void ConsoleLog::Warn(const char* message) {
    if (m_LogLevel >= WarningLevel)
        std::cout << "[WARNING]: " << message << std::endl;
}
void ConsoleLog::Error(const char* message) {
    if (m_LogLevel >= ErrorLevel)
        std::cout << "[ERROR]: " << message << std::endl;
}
void ConsoleLog::Info(const char* message) {
    if (m_LogLevel >= InfoLevel)
        std::cout << "[INFO]: " << message << std::endl;
}
