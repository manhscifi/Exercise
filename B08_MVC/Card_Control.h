#pragma once
#include"Card_Model.h"
#include"Card_View.h"

class Card_Control
{
private:
	Card_Model _model;
	Card_View _view;
public:
	Card_Control();
	Card_Control(Card_Model model, Card_View view);
	~Card_Control();

	string getCardID();
	int getBorrowDate();
	int getReturnDate();
	string getBookID();

	void inputCard();
	shared_ptr<Student_Model> inputStudent();

	void printCard();
};

