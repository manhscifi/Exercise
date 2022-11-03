#pragma once
#include"Validator.h"
#include"Manager.h"

enum choice
{
    insert = 1,
    edit,
    detele,
    display,
    findEmployee,
    numberOfEmployeeAddInThisSession,
    exitProgram,
    experienceEmployee = 'a',
    fresherEmployee = 'b',
    internEmployee = 'c'
};

class Menu
{
public:
    Menu();
    void run();
};