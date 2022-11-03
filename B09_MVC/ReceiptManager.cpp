#include "ReceiptManager.h"

void ReceiptManager::addReceipt()
{
	Receipt_Model model;
	Receipt_View view;
	shared_ptr<Receipt_Control> receipt = make_shared<Receipt_Control>(model, view);
	receipt->inputReceipt();
	_listReceipt.insert({ receipt->getHouseHold().getHouseNo(), receipt });
	cout << "Added\n";
}

void ReceiptManager::deteteReipt()
{
	string houseNo;
	cout << "Enter house number: ";
	//cin.ignore();
	getline(cin, houseNo);

	int flag = 0;
	for (auto i = _listReceipt.begin(); i != _listReceipt.end(); i++)
	{
		string temp = i->second->getHouseHold().getHouseNo();
		
		if (temp == houseNo)
		{
			_listReceipt.erase(i);
			cout << "Deleted.\n";
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		cout << "Not found.\n";
	}
}

void ReceiptManager::editReceipt()
{
	string houseNo;
	cout << "Enter house number: ";	
	getline(cin, houseNo);

	int flag = 0;
	for (auto i = _listReceipt.begin(); i != _listReceipt.end(); i++)
	{
		string temp = i->second->getHouseHold().getHouseNo();

		if (temp == houseNo)
		{
			cout << "Old information: \n";
			i->second->printReceipt();
			cout << "\nType new information:\n";
			i->second->inputReceipt();
			cout << "Edited.\n";
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		cout << "Not found.\n";
	}
}

double ReceiptManager::calculatePayment()
{
	string houseNo;
	cout << "Enter house number: ";
	getline(cin, houseNo);

	int flag = 0;
	for (auto i = _listReceipt.begin(); i != _listReceipt.end(); i++)
	{
		string temp = i->second->getHouseHold().getHouseNo();

		if (temp == houseNo)
		{
			double newMeterIndex = i->second->getNewMeterIndex();
			double oldMeterIndex = i->second->getOldMeterIndex();
			return 5 * (newMeterIndex - oldMeterIndex);
			cout << "\n";
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		return 0;
	}
}

void ReceiptManager::printListReceipt()
{
	int flag = 0;
	for (auto i = _listReceipt.begin(); i != _listReceipt.end(); i++)
	{
		i->second->printReceipt();
		cout << "\n";
		flag = 1;
	}
	if (!flag)
	{
		cout << "Empty.\n";
	}
}