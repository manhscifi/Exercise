#pragma once
#include<iostream>
#include<string>
#include"Validator.h"
#include"UserInput.h"
#include"InvalidDOBException.h"
#include"InvalidFullNameException.h"
#include"InvalidPhoneNumberException.h"
using namespace std;

class View
{
public:
	//input student
	static string inputFullName();
	static string inputDoB();
	static string inputGender();
	static string inputPhoneNumber();
	static string inputUniversityName();
	static string inputGradeLevel();
	//input good student
	static double inputGPA();
	static string inputBestRewardName();
	//input normal student
	static int inputEnglishScore();
	static double inputEntryTestScore();

	//print good student
	static void printGoodStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
		double GPA, string bestRewardName);
	//print normal student
	static void printNormalStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
		int englishScore, double entryTestScore);

	//number of student to recruit
	static unsigned inputQuantity();
};

