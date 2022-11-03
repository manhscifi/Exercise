#pragma once
#include<exception>

class FullNameException : public std::exception
{
private:
    const char* message;

public:
    FullNameException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~FullNameException() {}
};