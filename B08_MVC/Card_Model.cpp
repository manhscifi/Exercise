#include "Card_Model.h"

Card_Model::Card_Model()
{
	_cardID = "";
	_borrowDate = 0;
	_returnDate = 0;
	_bookID = "";
	_student = NULL;
}

Card_Model::Card_Model(string cardID, int borrowDate, int returnDate, string bookID, shared_ptr<Student_Model> student)
{
	_cardID = cardID;
	_borrowDate = borrowDate;
	_returnDate = returnDate;
	_bookID = bookID;
	_student = student;
}

string Card_Model::getCardID()
{
	return _cardID;
}

void Card_Model::setCardID(string cardID)
{
	_cardID = cardID;
}

int Card_Model::getBorrowDate()
{
	return _borrowDate;
}

void Card_Model::setBorrowDate(int borrowDate)
{
	_borrowDate = borrowDate;
}

int Card_Model::getReturnDate()
{
	return _returnDate;
}

void Card_Model::setReturnDate(int returnDate)
{
	_returnDate = returnDate;
}

string Card_Model::getBookID()
{
	return _bookID;
}

void Card_Model::setBookID(string bookID)
{
	_bookID = bookID;
}


shared_ptr<Student_Model> Card_Model::getStudent()
{
	return _student;
}
void Card_Model::setStudent(shared_ptr<Student_Model> student)
{
	_student = student;
}