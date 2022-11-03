#include "Person_Model.h"

Person_Model::Person_Model()
{
	_name = "";
	_age = 0;
	_job = "";
	_id = "";
}

Person_Model::Person_Model(string name, int age, string job, string id)
{
	_name = name;
	_age = age;
	_job = job;
	_id = id;
}

Person_Model::~Person_Model() = default;

string Person_Model::getName()
{
	return _name;
}

void Person_Model::setName(string name)
{
	_name = name;
}

int Person_Model::getAge()
{
	return _age;
}

void Person_Model::setAge(int age)
{
	_age = age;
}

string Person_Model::getJob()
{
	return _job;
}

void Person_Model::setJob(string job)
{
	_job = job;
}

string Person_Model::getID()
{
	return _id;
}

void Person_Model::setID(string id)
{
	_id = id;
}
