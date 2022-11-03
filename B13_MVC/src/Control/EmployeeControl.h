#pragma once
#include"Employee.h"
#include"Experience.h"
#include"Fresher.h"
#include"Intern.h"
#include"View.h"

class EmployeeControl
{
	shared_ptr<Employee> employee;
public:
	void inputEmployee(int type);
	void printEmployee();

	//input
	void inputEmployeeID();
	void inputPhone();

	//get
	string getEmployeeID();	
	string getPhone();
	string getFullName();
	string getBirthDay();
	string getEmail();
	map<string, shared_ptr<Certificate>>& getListCertificate();
	int getEmployeeType();
};

