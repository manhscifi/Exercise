#pragma once
#include<iostream>
#include<string>
#include"Town_Model.h"
using namespace std;

class Town_View
{
public:
	int inputFamilyNo();
	string inputName();
	int inputAge();
	string inputJob();
	string inputID();
	string inputHouseNo();
	int inputMemberNo();
	Person inputPerson();
	Family inputFamily();
	void printPerson(string name, int age, string job, string id);
	void printFamily(string houseNo, int memberNo, map<string, Person>& listPerson);
	void printTown(map<string, Family> listFamily);
};

