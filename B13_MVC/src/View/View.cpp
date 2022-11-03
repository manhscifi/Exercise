#include "View.h"

//view for certificate
string View::inputCertificateID()
{
	string certificateID;
	do
	{
		cout << "\tEnter Certificate ID: ";
		getline(cin, certificateID);
	} while (certificateID.empty());
	
	return certificateID;
}
string View::inputCertificateName()
{
	string certificateName;
	do
	{
		cout << "\tEnter Certificate Name: ";
		getline(cin, certificateName);
	} while (certificateName.empty());

	return certificateName;
}
string View::inputCertificateRank()
{
	string certificateRank;
	do
	{
	cout << "\tEnter Certificate Rank: ";
	getline(cin, certificateRank);
	} while (certificateRank.empty());

	return certificateRank;
}
string View::inputCertificateDate()
{
	string certificateDate;
	bool valid;
	cout << "\tEnter Certificate Date: ";
	do
	{	
		getline(cin, certificateDate);
		valid = Validator::checkDate(certificateDate);
		if (!valid)
		{
			cout << "\tEnter again: ";
		}
	} while (!valid);

	return certificateDate;
}
//view for employee
string View::inputEmployeeID()
{
	string employeeID;
	cout << "Enter employee ID: ";
	do
	{		
		getline(cin, employeeID);
		if (employeeID.empty())
		{
			cout << "Enter again: ";
		}
	} while (employeeID.empty());

	return employeeID;
}
string View::inputFullName()
{
	string fullName;

	while (true)
	{
		cout << "Enter employee fullname: ";
		try
		{
			getline(cin, fullName);

			if (Validator::checkName(fullName) == false)
			{
				throw FullNameException("Invalid name.");
			}
		}
		catch (FullNameException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return fullName;
}
string View::inputBirthDay()
{
	string birthDay;

	while (true)
	{
		cout << "Enter employee birthday: ";
		try
		{
			getline(cin, birthDay);

			if (Validator::checkDate(birthDay) == false)
			{
				throw BirthDayException("Invalid DoB.");
			}
		}
		catch (BirthDayException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}

	return birthDay;
}
string View::inputPhone()
{
	string phone;
	
	while (true)
	{
		cout << "Enter employee phone: ";
		try
		{
			getline(cin, phone);

			if (Validator::checkPhone(phone) == false)
			{
				throw PhoneException("Invalid phone number.");
			}
		}
		catch (PhoneException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return phone;
}
string View::inputEmail()
{
	string email;
	while (true)
	{
		cout << "Enter employee email: ";
		try
		{
			getline(cin, email);

			if (Validator::checkEmail(email) == false)
			{
				throw EmailException("Invalid email.");
			}
		}
		catch (EmailException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return email;
}
int View::inputEmployeeType()
{
	int employeeType;
	cout << "Enter employee type: ";
	employeeType = UserInput<int>::input();
	return employeeType;
}
int View::inputNumberOfCertificates()
{
	int numberOfCertificates;
	cout << "Enter number of certificates: ";
	do
	{
		
		numberOfCertificates = UserInput<int>::input();
		if (numberOfCertificates <= 0)
		{
			cout << "Enter again: ";
		}
	} while (numberOfCertificates <= 0);

	return numberOfCertificates;
}
//view for experience
int View::inputExpInYear()
{
	int expInYear;
	cout << "Enter experience in year: ";
	do
	{		
		expInYear = UserInput<int>::input();
		if (expInYear <= 0)
		{
			cout << "Enter again: ";
		}
	} while (expInYear <= 0);

	return expInYear;
}
string View::inputProSkill()
{
	string proSkill;
	bool valid;
	cout << "Enter professional skills: ";
	do
	{		
		getline(cin, proSkill);
		valid = proSkill.size() > 10;
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return proSkill;
}
//view for fresher
string View::inputGraduationDate()
{
	string graduationDate;
	bool valid;
	cout << "Enter graduation date:";
	do
	{	
		getline(cin, graduationDate);
		valid = Validator::checkDate(graduationDate);
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return graduationDate;
}
string View::inputGraduationRank()
{
	string graduationRank;
	cout << "Enter graduation rank: ";
	do
	{
		getline(cin, graduationRank);
		if (graduationRank.empty())
		{
			cout << "Enter again: \n";
		}
	} while (graduationRank.empty());

	return graduationRank;
}
string View::inputEducation()
{
	string education;
	cout << "Enter education: ";
	do
	{
		getline(cin, education);
		if (education.empty())
		{
			cout << "Enter again: \n";
		}
	} while (education.empty());

	return education;
}
//view for intern
string View::inputMajors()
{
	string majors;
	bool valid;
	cout << "Enter majors: ";
	do
	{
		getline(cin, majors);
		valid = !majors.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	
	return majors;
}
string View::inputSemester()
{
	string semester;
	bool valid;
	cout << "Enter semester: ";
	do
	{
		getline(cin, semester);
		valid = !semester.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	
	return semester;
}
string View::inputUniversityName()
{
	string universityName;
	bool valid;
	cout << "Enter university name: ";
	do
	{
		getline(cin, universityName);
		valid = !universityName.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	return universityName;
}
// print
void View::printExperience(string employeeID, string fullName, string birthDay, string phone,
	string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
	int expInYear, string proSkill)
{
	cout << "Employee ID: " << employeeID << endl;
	cout << "Employee fullname: " << fullName << endl;
	cout << "Employee birthday: " << birthDay << endl;
	cout << "Employee phone: " << phone << endl;
	cout << "Employee email: " << email << endl;
	cout << "Employee type: " << employeeType << endl;
	cout << "Employee certificates: \n";

	int flag = 0;
	for (auto i = listCertificate.begin(); i != listCertificate.end(); i++)
	{
		cout << "\tCertificate ID: " << (i->second)->getCertificateID() << endl;
		cout << "\tCertificat name: " << (i->second)->getCertificateName() << endl;
		cout << "\tCertificate rank: " << (i->second)->getCertificateRank() << endl;
		cout << "\tCertificate date: " << (i->second)->getCertificateDate() << endl;
		cout << "\t------------\n";
		flag = 1;
	}
	if (!flag)
	{
		cout << "Empty.\n";
	}
	cout << "Experience in year: " << expInYear << endl;
	cout << "Professional skills: " << proSkill << endl;
	cout << "_________________________________________\n";
}
void View::printFresher(string employeeID, string fullName, string birthDay, string phone,
	string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
	string graduationDate, string graduationRank, string education)
{
	cout << "Employee ID: " << employeeID << endl;
	cout << "Employee fullname: " << fullName << endl;
	cout << "Employee birthday: " << birthDay << endl;
	cout << "Employee phone: " << phone << endl;
	cout << "Employee email: " << email << endl;
	cout << "Employee type: " << employeeType << endl;
	cout << "Employee certificates: \n";

	int flag = 0;
	for (auto i = listCertificate.begin(); i != listCertificate.end(); i++)
	{
		cout << "\tCertificate ID: " << (i->second)->getCertificateID() << endl;
		cout << "\tCertificat name: " << (i->second)->getCertificateName() << endl;
		cout << "\tCertificate rank: " << (i->second)->getCertificateRank() << endl;
		cout << "\tCertificate date: " << (i->second)->getCertificateDate() << endl;
		cout << "\t------------\n";
		flag = 1;
	}
	if (!flag)
	{
		cout << "Empty.\n";
	}
	cout << "Graduation date: " << graduationDate << endl;
	cout << "Graduation rank: " << graduationRank << endl;
	cout << "Eeducation: " << education << endl;
	cout << "_________________________________________\n";
}
void View::printIntern(string employeeID, string fullName, string birthDay, string phone,
	string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
	string majors, string semester, string universityName)
{
	cout << "Employee ID: " << employeeID << endl;
	cout << "Employee fullname: " << fullName << endl;
	cout << "Employee birthday: " << birthDay << endl;
	cout << "Employee phone: " << phone << endl;
	cout << "Employee email: " << email << endl;
	cout << "Employee type: " << employeeType << endl;
	cout << "Employee certificates: \n";

	int flag = 0;
	for (auto i = listCertificate.begin(); i != listCertificate.end(); i++)
	{
		cout << "\tCertificate ID: " << (i->second)->getCertificateID() << endl;
		cout << "\tCertificat name: " << (i->second)->getCertificateName() << endl;
		cout << "\tCertificate rank: " << (i->second)->getCertificateRank() << endl;
		cout << "\tCertificate date: " << (i->second)->getCertificateDate() << endl;
		cout << "\t------------\n";
		flag = 1;
	}
	if (!flag)
	{
		cout << "Empty.\n";
	}
	cout << "Majors: " << majors << endl;
	cout << "Semester: " << semester << endl;
	cout << "University name: " << universityName << endl;
	cout << "_________________________________________\n";
}
