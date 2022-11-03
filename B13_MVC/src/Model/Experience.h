#pragma once
#include"Employee.h"

class Experience : public Employee
{
private:
	int mExpInYear;
	string mProSkill;
public:
	Experience();
	Experience(string employeeID, string fullName, string birthDay, string phone, string email,
		int employeeType, map<string, shared_ptr<Certificate>>& listCertificate,
		int expInYear, string proSkill);
	~Experience();
	void setExpInYear(int expInYear);
	void setProSkill(string proSkill);
	int getExpInYear();
	string getProSkill();
};


