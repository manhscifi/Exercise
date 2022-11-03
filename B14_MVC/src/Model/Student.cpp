#include "Student.h"

Student::Student()
{
	mFullName = mDoB = mGender = mPhoneNumber = mUniversityName = mGradeLevel = "";
}
Student::Student(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel)
{
	mFullName = fullName;
	mDoB = doB;
	mGender = gender;
	mPhoneNumber = phoneNumber;
	mUniversityName = universityName;
	mGradeLevel = gradeLevel;
}
Student::~Student()
{}

//set
void Student::setFullName(string fullName)
{
	mFullName = fullName;
}
void Student::setDoB(string doB)
{
	mDoB = doB;
}
void Student::setGender(string gender)
{
	mGender = gender;
}
void Student::setPhoneNumber(string phoneNumber)
{
	mPhoneNumber = phoneNumber;
}
void Student::setUniversityName(string universityName)
{
	mUniversityName = universityName;
}
void Student::setGradeLevel(string gradeLevel)
{
	mGradeLevel = gradeLevel;
}

//get
string Student::getFullName() const
{
	return mFullName;
}
string Student::getDoB() const
{
	return mDoB;
}
string Student::getGender() const
{
	return mGender;
}
string Student::getPhoneNumber() const
{
	return mPhoneNumber;
}
string Student::getUniversityName() const
{
	return mUniversityName;
}
string Student::getGradeLevel() const
{
	return mGradeLevel;
}

int Student::getStudentType() const
{
	return mStudentType;
}