#include "Receipt_Control.h"

Receipt_Control::Receipt_Control(Receipt_Model model, Receipt_View view)
{
	_model = model;
	_view = view;
}

HouseHold_Control Receipt_Control::getHouseHold()
{
	return _model.getHouseHold();
}

double Receipt_Control::getOldMeterIndex()
{
	return _model.getOldMeterIndex();
}

double Receipt_Control::getNewMeterIndex()
{
	return _model.getNewMeterIndex();
}

double Receipt_Control::getPayment()
{
	return _model.getPayment();
}


void Receipt_Control::inputReceipt()
{
	HouseHold_Control houseHold = _view.inputHouseHold();
	_model.setHousehold(houseHold);
	double oldMeterInex = _view.inputOldMeterIndex();
	_model.setOldMeterIndex(oldMeterInex);
	double newMeterInex = _view.inputNewMeterIndex();
	_model.setNewMeterIndex(newMeterInex);
}

void Receipt_Control::printReceipt()
{
	_view.printReceipt(_model.getHouseHold(), _model.getNewMeterIndex(),
		_model.getOldMeterIndex(), _model.getPayment());
}
