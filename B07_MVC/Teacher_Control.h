#pragma once
#include"Teacher_Model.h"
#include"Teacher_View.h"

class Teacher_Control
{
private:
	Teacher_Model _model;
	Teacher_View _view;
public:
	Teacher_Control();
	Teacher_Control(Teacher_Model model, Teacher_View view);
	~Teacher_Control();
	string getName();
	int getAge();
	string getHomeTown();
	string getTeacherID();
	double getSalary();
	double getBonus();
	double getPenaty();
	double getRealSalary();
	void inputTeacher();
	void printTeacher();
};

