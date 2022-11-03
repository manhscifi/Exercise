#include "HouseHold_Control.h"

HouseHold_Control::HouseHold_Control(HouseHold_Model model, HouseHold_View view)
{
	_model = model;
	_view = view;
}

string HouseHold_Control::getOwnerName()
{
	return _model.getOwnerName();
}

string HouseHold_Control::getHouseNo()
{
	return _model.getHouseNo();
}

string HouseHold_Control::getMeterID()
{
	return _model.getMeterID();
}


void HouseHold_Control::inputHouseHold()
{
	string ownerName = _view.inputOwnerName();
	_model.setOwnerName(ownerName);
	string houseNo = _view.inpputHouseNo();
	_model.setHouseNo(houseNo);
	string meterID = _view.inputMeterID();
	_model.setMeterID(meterID);
}

void HouseHold_Control::printHouseHold()
{
	_view.printHouseHold(_model.getOwnerName(), _model.getHouseNo(), _model.getMeterID());
}