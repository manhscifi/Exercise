#pragma once
#include"Employee.h"

class Intern : public Employee
{
private:
	string mMajors;
	string mSemester;
	string mUniversityName;
public:
	Intern();
	Intern(string employeeID, string fullName, string birthDay, string phone, string email,
		int employeeType, map<string, shared_ptr<Certificate>>& listCertificate,
		string majors, string semester, string universityName);
	~Intern();

	void setMajors(string majors);
	void setSemester(string semester);
	void setUniversityName(string universityName);

	string getMajors();
	string getSemester();
	string getUniversityName();
};
