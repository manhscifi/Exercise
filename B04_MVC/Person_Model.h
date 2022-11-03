#pragma once
#include<iostream>
using namespace std;

class Person_Model
{
private:
	string _name;
	int _age;
	string _job;
	string _id;
public:
	Person_Model();
	Person_Model(string, int, string, string);
	~Person_Model();
	string getName();
	void setName(string);
	int getAge();
	void setAge(int);
	string getJob();
	void setJob(string);
	string getID();
	void setID(string);
};

