#pragma once
#include"Card_Control.h"
#include<map>

class Manage_Card
{
private: 
	map<string, shared_ptr<Card_Control>> _listCard;
public:
	void addCard();
	void deleteByCardID();
	void printListCard();
};

