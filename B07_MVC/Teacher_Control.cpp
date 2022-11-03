#include "Teacher_Control.h"

Teacher_Control::Teacher_Control()
{

}

Teacher_Control::Teacher_Control(Teacher_Model model, Teacher_View view)
{
	_model = model;
	_view = view;
}

Teacher_Control::~Teacher_Control()
{

}

string Teacher_Control::getName()
{
	return _model.getName();
}

int Teacher_Control::getAge()
{
	return _model.getAge();
}

string Teacher_Control::getHomeTown()
{
	return _model.getHomeTown();
}

string Teacher_Control::getTeacherID()
{
	return _model.getTeacherID();
}

double Teacher_Control::getSalary()
{
	return _model.getSalary();
}

double Teacher_Control::getBonus()
{
	return _model.getBonus();
}

double Teacher_Control::getPenaty()
{
	return _model.getPenaty();
}

double Teacher_Control::getRealSalary()
{
	return _model.getRealSalary();
}

void Teacher_Control::inputTeacher()
{
	string name = _view.inputName();
	_model.setName(name);
	int age = _view.inputAge();
	_model.setAge(age);
	string hometown = _view.inputHomeTown();
	_model.setHomeTown(hometown);
	string teacherID = _view.inputTeacherID();
	_model.setTeacherID(teacherID);
	double salery = _view.inputSalery();
	_model.setSalary(salery);
	double bonus = _view.inputBonus();
	_model.setBonus(bonus);
	double penaty = _view.inputPenaty();
	_model.setPenaty(penaty);
}

void Teacher_Control::printTeacher()
{
	_view.printTeacher(_model.getName(), _model.getAge(), _model.getHomeTown(), _model.getTeacherID(),
						_model.getSalary(), _model.getBonus(), _model.getPenaty(), _model.getRealSalary());
}