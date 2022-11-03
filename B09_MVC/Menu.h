#pragma once
#include"ReceiptManager.h"

enum choice
{
    Insert = 1,
    Edit,
    Detele,
    Calculator,
    Display,
    Exit
};

class Menu
{
public:
	Menu();
	void run();
};
