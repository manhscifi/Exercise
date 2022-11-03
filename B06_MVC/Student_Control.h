#pragma once
#include"Student_Model.h"
#include"Student_View.h"
using namespace std;

class Student_Control
{
private:
	Student_Model _model;
	Student_View _view;
public:
	Student_Control(Student_Model model, Student_View view);
	string getName();
	int getAge();
	string getHomeTown();
	void intputStudent();
	void printStudent();
};
