#pragma once
#include<exception>

class EmailException : public std::exception
{
private:
    const char* message;

public:
    EmailException(const char* msg) : message(msg) {}
    const char* what()
    {
        return message;
    }
    ~EmailException() {}
};