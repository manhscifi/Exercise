#pragma once
#include"Student_Control.h"
#include<memory>
#include<vector>

class School_Manage
{
	vector<shared_ptr<Student_Control>> _listStudent;
public:
	void addStudent();
	void printListStudent();
	void printListStudentAge20();
	void DisplayStudentAge23HomeDN();
};

