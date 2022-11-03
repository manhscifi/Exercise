#pragma once
#include<iostream>
#include<string>
#include<memory>
#include<map>
#include"Validator.h"
#include"UserInput.h"
#include"Certificate.h"
#include"EmailException.h"
#include"BirthDayException.h"
#include"FullNameException.h"
#include"PhoneException.h"
using namespace std;

class View
{
public:
	//view for certificate
	static string inputCertificateID();
	static string inputCertificateName();
	static string inputCertificateRank();
	static string inputCertificateDate();
	//view for employee
	static string inputEmployeeID();
	static string inputFullName();
	static string inputBirthDay();
	static string inputPhone();
	static string inputEmail();
	static int inputEmployeeType();
	static int inputNumberOfCertificates();
	//view for experience
	static int inputExpInYear();
	static string inputProSkill();	
	//view for fresher
	static string inputGraduationDate();
	static string inputGraduationRank();
	static string inputEducation();
	//view for intern
	static string inputMajors();
	static string inputSemester();
	static string inputUniversityName();
	//print
	static void printExperience(string employeeID, string fullName, string birthDay, string phone,
		string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
		int expInYear, string proSkill);
	static void printFresher(string employeeID, string fullName, string birthDay, string phone,
		string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
		string graduationDate, string graduationRank, string education);
	static void printIntern(string employeeID, string fullName, string birthDay, string phone,
		string email, int employeeType, map<string, shared_ptr<Certificate>> listCertificate,
		string majors, string semester, string universityName);
};

