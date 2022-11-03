#pragma once
#include"Town_Model.h"
#include"Town_View.h"

class Town_Control
{
private:
	Town_Model _model;
	Town_View _view;
public:
	Town_Control(Town_Model model, Town_View view);

	Person inputPerson();

	Family inputFamily();

	void inputTown();

	void printTown();

};

