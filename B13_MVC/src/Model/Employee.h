#pragma once
#include<iostream>
#include<string>
#include<map>
#include<memory>
#include"Certificate.h"
using namespace std;

enum EmployeeType
{
	ExperienceType = 0,
	FresherType = 1,
	InternType = 2,
	NotType
};

class Employee
{
private:
	string mEmployeeID;
	string mFullName;
	string mBirthDay;
	string mPhone;
	string mEmail;
	static int sEmployeeCount;
	map<string, shared_ptr<Certificate>> mListCertificate;
protected:
	int mEmployeeType;
public:
	Employee();
	Employee(string employeeID, string fullName, string birthDay, string phone, string email,
		int employeeType, map<string, shared_ptr<Certificate>> listCertificate);
	virtual ~Employee();
	//set
	void setEmployeeID(string employeeID);
	void setFullName(string fullName);
	void setBirthDay(string birthDay);
	void setPhone(string phone);
	void setEmail(string email);
	void setEmployeeType(int employeeType);
	void setListCertificate(map<string, shared_ptr<Certificate>>& listCertificate);
	//get
	string getEmployeeID();
	string getFullName();
	string getBirthDay();
	string getPhone();
	string getEmail();
	int getEmployeeType();
	map<string, shared_ptr<Certificate>>& getListCertificate();
	//
	static void EmployeeCountForAddEmployee();
	static void EmployeeCountForDeleteEmployee();
	static int getEmployeeCount();
};