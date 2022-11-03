#pragma once
#include<exception>

class PhoneException : public std::exception
{
private:
    const char* message;

public:
    PhoneException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~PhoneException() {}
};