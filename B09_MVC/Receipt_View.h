#pragma once
#include<iostream>
#include<string>
#include"HouseHold_Control.h"
#include"Validation.h"
using namespace std;

class Receipt_View
{
public:
	HouseHold_Control& inputHouseHold();
	double inputOldMeterIndex();
	double inputNewMeterIndex();
	double inputPayment();
	void printReceipt(HouseHold_Control, double, double, double);
};

