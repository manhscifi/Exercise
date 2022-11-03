#include "Student_Control.h"

Student_Control::Student_Control(Student_Model model, Student_View view)
{
	_model = model;
	_view = view;
}

string Student_Control::getName()
{
	return _model.getName();
}

int Student_Control::getAge()
{
	return _model.getAge();
}

string Student_Control::getHomeTown()
{
	return _model.getHomeTown();
}

void Student_Control::intputStudent()
{
	string name = _view.inputName();
	_model.setName(name);
	int age = _view.inputAge();
	_model.setAge(age);
	string hometown = _view.inputHomeTown();
	_model.setHomeTown(hometown);
}

void Student_Control::printStudent()
{
	_view.printStudent(_model.getName(), _model.getAge(), _model.getHomeTown());
}

