#include "Employee.h"

Employee::Employee()
{
	mEmployeeID = "";
	mFullName = "";
	mBirthDay = "";
	mPhone = "";
	mEmail = "";
	mEmployeeType = NotType;
}
Employee::Employee(string employeeID, string fullName, string birthDay, string phone, string email,
	int employeeType, map<string, shared_ptr<Certificate>> listCertificate)
{
	mEmployeeID = employeeID;
	mFullName = fullName;
	mBirthDay = birthDay;
	mPhone = phone;
	mEmail = email;
	mEmployeeType = employeeType;
	mListCertificate = listCertificate;
}

Employee::~Employee()
{

}

void Employee::setEmployeeID(string employeeID)
{
	mEmployeeID = employeeID;
}

void Employee::setFullName(string fullName)
{
	mFullName = fullName;
}

void Employee::setBirthDay(string birthDay)
{
	mBirthDay = birthDay;
}

void Employee::setPhone(string phone)
{
	mPhone = phone;
}

void Employee::setEmail(string email)
{
	mEmail = email;
}

void Employee::setEmployeeType(int employeeType)
{
	mEmployeeType = employeeType;
}

void Employee::setListCertificate(map<string, shared_ptr<Certificate>>& listCertificate)
{
	mListCertificate = listCertificate;
}

string Employee::getEmployeeID()
{
	return mEmployeeID;
}

string Employee::getFullName()
{
	return mFullName;
}

string Employee::getBirthDay()
{
	return mBirthDay;
}

string Employee::getPhone()
{
	return mPhone;
}

string Employee::getEmail()
{
	return mEmail;
}

int Employee::getEmployeeType()
{
	return mEmployeeType;
}

map<string, shared_ptr<Certificate>>& Employee::getListCertificate()
{
	return mListCertificate;
}

int Employee::sEmployeeCount = 0;

void Employee::EmployeeCountForAddEmployee()
{
	sEmployeeCount++;
}
void Employee::EmployeeCountForDeleteEmployee()
{
	sEmployeeCount--;
}
int Employee::getEmployeeCount()
{
	return sEmployeeCount;
}