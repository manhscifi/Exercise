#include "Receipt_Model.h"

Receipt_Model::Receipt_Model()
{
	_oldMeterIndex = 0;
	_newMeterIndex = 0;
	_payment = 0;
}

Receipt_Model::Receipt_Model(HouseHold_Control houseHold, double oldMeterIndex, double newMeterIndex, double payment)
{
	_houseHold = houseHold;
	_oldMeterIndex = oldMeterIndex;
	_newMeterIndex = newMeterIndex;
	_payment = payment;
}

Receipt_Model::~Receipt_Model()
{

}

void Receipt_Model::setHousehold(HouseHold_Control houseHold)
{
	_houseHold = houseHold;
}

void Receipt_Model::setOldMeterIndex(double oldMeterIndex)
{
	_oldMeterIndex = oldMeterIndex;
}

void Receipt_Model::setNewMeterIndex(double newMeterIndex)
{
	_newMeterIndex = newMeterIndex;
}

void Receipt_Model::setPayment(double payment)
{
	_payment = payment;
}

HouseHold_Control Receipt_Model::getHouseHold()
{
	return _houseHold;
}

double Receipt_Model::getOldMeterIndex()
{
	return _oldMeterIndex;
}

double Receipt_Model::getNewMeterIndex()
{
	return _newMeterIndex;
}

double Receipt_Model::getPayment()
{
	return _payment;
}
