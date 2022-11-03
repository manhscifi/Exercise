#pragma once
#include"Teacher_Manage.h"

enum choice
{
    Insert = 1,
    Detele = 2,
    Calculator = 3,
    Display = 4,
    Exit = 5,
};


class Menu
{
public:
    Menu();
    void run();
};

