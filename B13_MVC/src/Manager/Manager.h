#pragma once
#include"EmployeeControl.h"

class Manager
{
private:
	map<string, shared_ptr<EmployeeControl>> mListEmployee;
public:
	void addEmployee(int);
	void editEmployeeByID();
	void deleteEmployeeByID();
	void printListEmployee();
	void getNumberOfEmployeeAdded();
	void findEmployeeByType(int);

	bool checkEmployeeIDExisted(string);
	bool checkEmployeePhoneExisted(string);
};