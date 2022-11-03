#include "Receipt_View.h"

HouseHold_Control& Receipt_View::inputHouseHold()
{
	HouseHold_Model model;
	HouseHold_View view;
	static HouseHold_Control houseHouse(model, view);
	houseHouse.inputHouseHold();
	return houseHouse;
}

double Receipt_View::inputOldMeterIndex()
{
	double oldMeterIndex;
	cout << "Enter old meter index: ";
	oldMeterIndex = Validation<double>::check();
	//cin >> oldMeterIndex;
	return oldMeterIndex;
}

double Receipt_View::inputNewMeterIndex()
{
	double newMeterIndex;
	cout << "Enter new meter index: ";
	newMeterIndex = Validation<double>::check();
	//cin >> newMeterIndex;
	return newMeterIndex;
}

double Receipt_View::inputPayment()
{
	double payment;
	cout << "Enter payment: ";
	payment = Validation<double>::check();
	//cin >> payment;
	return payment;
}

void Receipt_View::printReceipt(HouseHold_Control houseHold, double oldMeterIndex, double newMeterIndex, double payment)
{
	houseHold.printHouseHold();
	cout << "Old meter index: " << oldMeterIndex << endl;
	cout << "New meter index: " << newMeterIndex << endl;
	//cout << "Payment: " << payment << endl;
}

