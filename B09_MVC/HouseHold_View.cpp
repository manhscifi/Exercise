#include "HouseHold_View.h"

string HouseHold_View::inputOwnerName()
{
	string ownerName;
	//ownerName = Validation<string>::check("Enter owner name: ");
	cout << "Enter owner name: ";
	getline(cin, ownerName);
	return ownerName;
}

string HouseHold_View::inpputHouseNo()
{
	string houseNo;
	//houseNo = Validation<string>::check("Enter house number: ");
	cout << "Enter house number: ";
	getline(cin, houseNo);
	return houseNo;
}

string HouseHold_View::inputMeterID()
{
	string meterID;
	//meterID = Validation<string>::check("Enter meter ID: ");
	cout << "Enter meter ID: ";
	getline(cin, meterID);
	return meterID;
}

void HouseHold_View::printHouseHold(string ownerName, string houseNo, string meterID)
{
	cout << "Household owner: " << ownerName << endl;
	cout << "House number: " << houseNo << endl;
	cout << "Meter ID: " << meterID << endl;
}