#pragma once
#include<iostream>
#include<string>
#include"Validation.h"
using namespace std;

class HouseHold_View
{
public:
	string inputOwnerName();
	string inpputHouseNo();
	string inputMeterID();
	void printHouseHold(string, string, string);
};

