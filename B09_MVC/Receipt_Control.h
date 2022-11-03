#pragma once
#include"Receipt_Model.h"
#include"Receipt_View.h"

class Receipt_Control
{
private:
	Receipt_Model _model;
	Receipt_View  _view;
public:
	Receipt_Control(Receipt_Model model, Receipt_View view);
	HouseHold_Control getHouseHold();
	double getOldMeterIndex();
	double getNewMeterIndex();
	double getPayment();
	void inputReceipt();
	void printReceipt();
};

