#include "Student_Model.h"

Student_Model::Student_Model()
{
	_name = "";
	_age = 0;
	_homwtown = "";

}

Student_Model::Student_Model(string name, int age, string homwtown)
{
	_name = name;
	_age = age;
	_homwtown = homwtown;
}

Student_Model::~Student_Model()
{

}

void Student_Model::setName(string name)
{
	_name = name;
}

string Student_Model::getName()
{
	return _name;
}

void Student_Model::setAge(int age)
{
	_age = age;
}

int Student_Model::getAge()
{
	return _age;
}

void Student_Model::setHomeTown(string hometown)
{
	_homwtown = hometown;
}

string Student_Model::getHomeTown()
{
	return _homwtown;
}
