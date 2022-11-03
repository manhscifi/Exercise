#include "Intern.h"

Intern::Intern() : Employee()
{
	mMajors = "";
	mSemester = "";
	mUniversityName = "";
	mEmployeeType = InternType;
}

Intern::Intern(string employeeID, string fullName, string birthDay, string phone, string email,
	int employeeType, map<string, shared_ptr<Certificate>>& listCertificate,
	string majors, string semester, string universityName)
	: Employee(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate)
{
	mMajors = majors;
	mSemester = semester;
	mUniversityName = universityName;
}

Intern::~Intern()
{

}

void Intern::setMajors(string majors)
{
	mMajors = majors;
}

void Intern::setSemester(string semester)
{
	mSemester = semester;
}

void Intern::setUniversityName(string universityName)
{
	mUniversityName = universityName;
}

string Intern::getMajors()
{
	return mUniversityName;
}

string Intern::getSemester()
{
	return mSemester;
}

string Intern::getUniversityName()
{
	return mUniversityName;
}