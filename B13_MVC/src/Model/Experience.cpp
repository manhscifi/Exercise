#include "Experience.h"

Experience::Experience() : Employee()
{
	mExpInYear = 0;
	mProSkill = "";
	mEmployeeType = ExperienceType;
}

Experience::Experience(string employeeID, string fullName, string birthDay, string phone, string email,
	int employeeType, map<string, shared_ptr<Certificate>> &listCertificate,
	int expInYear, string proSkill)
	: Employee(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate)
{
	mExpInYear = expInYear;
	mProSkill = proSkill;
}

Experience::~Experience()
{

}

void Experience::setExpInYear(int expInYear)
{
	mExpInYear = expInYear;
}

void Experience::setProSkill(string proSkill)
{
	mProSkill = proSkill;
}

int Experience::getExpInYear()
{
	return mExpInYear;
}

string Experience::getProSkill()
{
	return mProSkill;
}