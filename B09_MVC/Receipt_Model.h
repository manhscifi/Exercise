#pragma once
#include<iostream>
#include<memory>
#include"HouseHold_Control.h"
using namespace std;

class Receipt_Model
{
private:
	HouseHold_Control _houseHold;
	double _oldMeterIndex;
	double _newMeterIndex;
	double _payment;
public:
	Receipt_Model();
	Receipt_Model(HouseHold_Control, double, double, double);
	~Receipt_Model();
	void setHousehold(HouseHold_Control);
	void setOldMeterIndex(double);
	void setNewMeterIndex(double);
	void setPayment(double);
	HouseHold_Control getHouseHold();
	double getOldMeterIndex();
	double getNewMeterIndex();
	double getPayment();
};