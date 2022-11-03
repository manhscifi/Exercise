#pragma once
#include"Teacher_Control.h"
#include<memory>
#include<map>

class Teacher_Manage
{
private:
	map<string, shared_ptr<Teacher_Control>> _listTeacher;
public:
	void addTeacher();
	void deleteTeacherByID();
	double calculateRealSalaryByID();
	void printListTeacher();
};

