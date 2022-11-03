#pragma once
#include"Town_Control.h"
class Menu
{
public:
	void run()
	{
		Town_Model model;
		Town_View view;
		Town_Control a(model, view);
		a.inputTown();
		a.printTown();
	}
};

