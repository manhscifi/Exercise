#pragma once
#include<iostream>
#include<string>
using namespace std;

enum Type
{
	GoodType = 0,
	NormalType = 1,
	NotType
};

class Student
{
private:
	string mFullName;
	string mDoB;
	string mGender;
	string mPhoneNumber;
	string mUniversityName;
	string mGradeLevel;
protected:
	int mStudentType;
public:
	Student();
	Student(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel);
	virtual ~Student();

	//set
	void setFullName(string fullName);
	void setDoB(string doB);
	void setGender(string gender);
	void setPhoneNumber(string phoneNumber);
	void setUniversityName(string universityName);
	void setGradeLevel(string gradeLevel);	

	//get
	string getFullName() const;
	string getDoB() const;
	string getGender() const;
	string getPhoneNumber() const;
	string getUniversityName() const;
	string getGradeLevel() const;
	int getStudentType() const;
};

