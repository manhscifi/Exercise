#pragma once
#include<exception>

class InvalidFullNameException : public std::exception
{
private:
    const char* message;

public:
    InvalidFullNameException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~InvalidFullNameException() {}
};