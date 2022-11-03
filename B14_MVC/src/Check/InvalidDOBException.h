#pragma once
#include<exception>

class InvalidDOBException : public std::exception
{
private:
    const char* message;

public:
    InvalidDOBException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~InvalidDOBException() {}
};