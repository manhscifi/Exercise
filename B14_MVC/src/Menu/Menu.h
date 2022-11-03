#pragma once
#include"StudentManager.h"
#include"Validator.h"

enum choice
{
    addGoodStudent = 1,
    addNormalStudent,
    displayListStudent,
    displayQualifiedStudents,
    exitProgram,
};
class Menu
{
public:
	Menu();
	void run();
};

