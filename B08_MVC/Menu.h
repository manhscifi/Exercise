#pragma once
#include "Manage_Card.h"

enum choice
{
    Insert = 1,
    Detele = 2,
    Display = 3,
    Exit = 4,
};

class Menu
{
public:
    Menu();
    void run();
};
