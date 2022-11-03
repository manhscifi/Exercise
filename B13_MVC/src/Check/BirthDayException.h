#pragma once
#include<exception>

class BirthDayException : public std::exception
{
private:
    const char* message;

public:
    BirthDayException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~BirthDayException() {}
};