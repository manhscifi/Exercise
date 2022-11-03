#pragma once
#include<iostream>
#include<map>
#include<memory>
#include"Person_Model.h"
typedef shared_ptr<Person_Model> Person;

using namespace std;

class Family_Model
{
private:
	int _memberNo;
	string _houseNo;
	map<string, Person> _listPerson; //<id of a Person_Model object, smartpointer person point to a Person_Model object>
public:
	Family_Model();
	Family_Model(int, string, map<string, shared_ptr<Person_Model>>);
	~Family_Model();
	int getMemberNo();
	void setMemberNo(int);
	string getHouseNo();
	void setHouseNo(string);
	map<string, shared_ptr<Person_Model>> getListPerson();
	void addPerson(Person&);
	void setListPerson(map<string, shared_ptr<Person_Model>>&);
}; 

