#pragma once
#include"HouseHold_Model.h"
#include"HouseHold_View.h"

class HouseHold_Control
{
private:
	HouseHold_Model _model;
	HouseHold_View  _view;
public:
	HouseHold_Control(){}
	HouseHold_Control(HouseHold_Model model, HouseHold_View view);
	string getOwnerName();
	string getHouseNo();
	string getMeterID();
	void inputHouseHold();
	void printHouseHold();
};

