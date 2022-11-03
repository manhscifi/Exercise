#include "HouseHold_Model.h"

HouseHold_Model::HouseHold_Model()
{
	_ownerName = "";
	_houseNo = "";
	_meterID = "";
}

HouseHold_Model::HouseHold_Model(string ownerName, string houseNo, string meterID)
{
	_ownerName = ownerName;
	_houseNo = houseNo;
	_meterID = meterID;
}

HouseHold_Model::~HouseHold_Model(){}

void HouseHold_Model::setOwnerName(string ownerName)
{
	_ownerName = ownerName;
}

void HouseHold_Model::setHouseNo(string houseNo)
{
	_houseNo = houseNo;
}

void HouseHold_Model::setMeterID(string meterID)
{
	_meterID = meterID;
}

string HouseHold_Model::getOwnerName()
{
	return _ownerName;
}

string HouseHold_Model::getHouseNo()
{
	return _houseNo;
}

string HouseHold_Model::getMeterID()
{
	return _meterID;
}