#pragma once
#include"Receipt_Control.h"
#include<map>

class ReceiptManager
{
private:
	map<string, shared_ptr<Receipt_Control>> _listReceipt;
public:
	void addReceipt();
	void deteteReipt();
	void editReceipt();
	double calculatePayment();
	void printListReceipt();
};

