#include "Fresher.h"

Fresher::Fresher() : Employee()
{
	mGraduationDate = "";
	mGraduationRank = "";
	mEducation = "";
	mEmployeeType = FresherType;
}

Fresher::Fresher(string employeeID, string fullName, string birthDay, string phone, string email,
	int employeeType, map<string, shared_ptr<Certificate>>& listCertificate,
	string graduationDate, string graduationRank, string education)
	: Employee(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate)
{
	mGraduationDate = graduationDate;
	mGraduationRank = graduationRank;
	mEducation = education;
}

Fresher::~Fresher()
{

}

void Fresher::setGraduationDate(string graduationDate)
{
	mGraduationDate = graduationDate;
}

void Fresher::setGraduationRank(string graduationRank)
{
	mGraduationRank = graduationRank;
}

void Fresher::setEducation(string education)
{
	mEducation = education;
}


string Fresher::getGraduationDate()
{
	return mGraduationDate;
}

string Fresher::getGraduationRank()
{
	return mGraduationRank;
}

string Fresher::getEducation()
{
	return mEducation;
}

