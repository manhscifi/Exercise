#pragma once
#include<iostream>
using namespace std;

class CanBo
{
private:
	string mName;
	int mAge;
	string mGender;
	string mAddress;
public:
	CanBo();
	CanBo(string name, int age, string gender, string address);
	virtual ~CanBo();
	//set
	void setName(string name);
	void setAge(int age);
	void setGender(string gender);
	void setAddress(string address);
	//get
	string getName();
	int getAge();
	string getGender();
	string getAddress();
};

