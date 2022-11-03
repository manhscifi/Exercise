#include "EmployeeControl.h"

void EmployeeControl::inputEmployee(int type)
{
	string employeeID = View::inputEmployeeID();
	string fullName = View::inputFullName();
	string birthDay = View::inputBirthDay();
	string phone = View::inputPhone();
	string email = View::inputEmail();

	// input list certificate
	int NumberOfCertificates = View::inputNumberOfCertificates();

	map<string, shared_ptr<Certificate>> listCertificate;

	for (int i = 0; i < NumberOfCertificates; i++)
	{
		string certificateID = View::inputCertificateID();
		string certificateName = View::inputCertificateName();
		string certificateRank = View::inputCertificateRank();
		string certificateDate = View::inputCertificateDate();
		cout << "\t-------------\n";

		shared_ptr<Certificate> certificate = make_shared<Certificate>(certificateID, certificateName,
			certificateRank, certificateDate);
		listCertificate.insert({ certificate->getCertificateID(), certificate });
	}

	if (type == ExperienceType)
	{
		int employeeType = ExperienceType;
		int expInYear = View::inputExpInYear();
		string proSkill = View::inputProSkill();

		employee = make_shared<Experience>(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate,
			expInYear, proSkill);
	}
	if (type == FresherType)
	{
		int employeeType = FresherType;
		string graduationDate = View::inputGraduationDate();
		string graduationRank = View::inputGraduationRank();
		string education = View::inputEducation();
		employee = make_shared<Fresher>(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate,
			graduationDate, graduationRank, education);
	}
	if (type == InternType)
	{
		int employeeType = InternType;
		string majors = View::inputMajors();
		string semester = View::inputSemester();
		string universityName = View::inputUniversityName();
		employee = make_shared<Intern>(employeeID, fullName, birthDay, phone, email, employeeType, listCertificate,
			majors, semester, universityName);
	}
}
void EmployeeControl::printEmployee()
{
	if (dynamic_pointer_cast<Experience>(employee))
	{
		shared_ptr<Experience> temp = dynamic_pointer_cast<Experience>(employee);
		View::printExperience(temp->getEmployeeID(), temp->getFullName(), temp->getBirthDay(), temp->getPhone(), temp->getEmail(),
			temp->getEmployeeType(), temp->getListCertificate(),
			temp->getExpInYear(), temp->getProSkill());
	}
	else if (dynamic_pointer_cast<Fresher>(employee))
	{
		shared_ptr<Fresher> temp = dynamic_pointer_cast<Fresher>(employee);
		View::printFresher(temp->getEmployeeID(), temp->getFullName(), temp->getBirthDay(), temp->getPhone(), temp->getEmail(),
			temp->getEmployeeType(), temp->getListCertificate(),
			temp->getGraduationDate(), temp->getGraduationRank(), temp->getEducation());
	}
	else
	{
		shared_ptr<Intern> temp = dynamic_pointer_cast<Intern>(employee);
		View::printIntern(temp->getEmployeeID(), temp->getFullName(), temp->getBirthDay(), temp->getPhone(), temp->getEmail(),
			temp->getEmployeeType(), temp->getListCertificate(),
			temp->getMajors(), temp->getSemester(), temp->getUniversityName());
	}
	cout << "\n";
}

//input
void EmployeeControl::inputEmployeeID()
{
	string ID = View::inputEmployeeID();
	employee->setEmployeeID(ID);
}
void EmployeeControl::inputPhone()
{
	string phone = View::inputPhone();
	employee->setPhone(phone);
}

//get
string EmployeeControl::getEmployeeID()
{
	return employee->getEmployeeID();
}
string EmployeeControl::getPhone()
{
	return employee->getPhone();
}
string EmployeeControl::getFullName()
{
	return employee->getFullName();
}
string EmployeeControl::getBirthDay()
{
	return employee->getBirthDay();
}
string EmployeeControl::getEmail()
{
	return employee->getEmail();
}
map<string, shared_ptr<Certificate>>& EmployeeControl::getListCertificate()
{
	return employee->getListCertificate();
}
int EmployeeControl::getEmployeeType()
{
	return employee->getEmployeeType();
}
