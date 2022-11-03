#pragma once
#include<exception>

class InvalidPhoneNumberException : public std::exception
{
private:
    const char* message;

public:
    InvalidPhoneNumberException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~InvalidPhoneNumberException() {}
};