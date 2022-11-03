#pragma once
#include<iostream>
#include<string>
#include"Student_Model.h"
using namespace std;

class Card_View
{
public:
	string inputName();
	int inputAge();
	string inputStudentClass();
	string inputCardID();
	int inputBorrowDate();
	int inputReturnDate();
	string inputBookID();
	void printCard(string, int, int, string, shared_ptr<Student_Model>);
};

