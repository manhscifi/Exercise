#pragma once
#include<iostream>
using namespace std;

class Student_Model
{
private:
	string _name;
	int _age;
	string _homwtown;
public:
	Student_Model();
	Student_Model(string, int, string);
	~Student_Model();
	void setName(string);
	string getName();
	void setAge(int);
	int getAge();
	void setHomeTown(string);
	string getHomeTown();
};