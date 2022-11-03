#include "Card_Control.h"

Card_Control::Card_Control()
{

}

Card_Control::Card_Control(Card_Model model, Card_View view)
{
	_model = model;
	_view = view;
}

Card_Control::~Card_Control()
{

}

shared_ptr<Student_Model> Card_Control::inputStudent()
{
	shared_ptr<Student_Model> student = make_shared<Student_Model>();
	string name = _view.inputName();
	student->setName(name);
	int age = _view.inputAge();
	student->setAge(age);
	string studentClass = _view.inputStudentClass();
	student->setStudentClass(studentClass);
	return student;
}

void Card_Control::inputCard()
{
	string cardID = _view.inputCardID();
	_model.setCardID(cardID);
	int borrowDate = _view.inputBorrowDate();
	_model.setBorrowDate(borrowDate);
	int returnDate = _view.inputReturnDate();
	_model.setReturnDate(returnDate);
	string bookID = _view.inputBookID();
	_model.setBookID(bookID);
	shared_ptr<Student_Model> student = inputStudent();
	_model.setStudent(student);
}

string Card_Control::getCardID()
{
	return _model.getCardID();
}

int Card_Control::getBorrowDate()
{
	return _model.getBorrowDate();
}

int Card_Control::getReturnDate()
{
	return _model.getReturnDate();
}

string Card_Control::getBookID()
{
	return _model.getBookID();
}

void Card_Control::printCard()
{
	_view.printCard(_model.getCardID(), _model.getBorrowDate(),
		_model.getReturnDate(), _model.getBookID(),
		_model.getStudent());
}