#pragma once
#include<iostream>
using namespace std;

class HouseHold_Model
{
private:
	string _ownerName;
	string _houseNo;
	string _meterID;
public:
	HouseHold_Model();
	HouseHold_Model(string, string, string);
	~HouseHold_Model();
	void setOwnerName(string);
	void setHouseNo(string);
	void setMeterID(string);
	string getOwnerName();
	string getHouseNo();
	string getMeterID();
};

