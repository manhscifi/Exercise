#pragma once
#include<iostream>
#include<string>
using namespace std;

class Teacher_View
{
public:
	string inputName();
	int inputAge();
	string inputHomeTown();
	string inputTeacherID();
	double inputSalery();
	double inputBonus();
	double inputPenaty();
	double inputRealSalery();
	void printTeacher(string, int, string, string, double, double, double, double);
};

