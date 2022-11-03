#pragma once
#include"Manager/CanBoManger.h"

enum choice
{
    addCongNhan = 1,
    addKySu,
    addNhanVien,
    searchByName,
    display,
    exitProgram
};

class Menu
{
public:
    Menu();
    void run();
};
