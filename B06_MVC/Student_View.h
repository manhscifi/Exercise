#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student_View
{
public:
	//Input
	string inputName();
	int inputAge();
	string inputHomeTown();
	//Output
	void printStudent(string, int, string);
};
