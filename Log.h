#pragma once

void Log(const char* message);
void InitLog();

enum State
{
    ErrorLevel, WarningLevel, InfoLevel
};

class ConsoleLog {

private:
    State m_LogLevel;

public:
    void SetLevel(State level);
    void Warn(const char* message);
    void Error(const char* message);
    void Info(const char* message);
};
