#pragma once
#include"Employee.h"

class Fresher : public Employee
{
private:
	string mGraduationDate;
	string mGraduationRank;
	string mEducation;
public:
	Fresher();
	Fresher(string employeeID, string fullName, string birthDay, string phone, string email,
		int employeeType, map<string, shared_ptr<Certificate>>& listCertificate,
		string graduationDate, string graduationRank, string education);
	~Fresher();

	void setGraduationDate(string graduationDate);
	void setGraduationRank(string graduationRank);
	void setEducation(string education);

	string getGraduationDate();
	string getGraduationRank();
	string getEducation();
};