#include "Family_Model.h"


Family_Model::Family_Model()
{
	_memberNo = 0;
	_houseNo = "";
}

Family_Model::Family_Model(int memberNo, string houseNo, map<string, Person> listPerson)
{
	_memberNo = memberNo;
	_houseNo = houseNo;
	_listPerson = listPerson;
}

Family_Model::~Family_Model() = default;

int Family_Model::getMemberNo()
{
	return _memberNo;
}

void Family_Model::setMemberNo(int memberNo)
{
	_memberNo = memberNo;
}

string Family_Model::getHouseNo()
{
	return _houseNo;
}

void Family_Model::setHouseNo(string houseNo)
{
	_houseNo = houseNo;
}

void Family_Model::addPerson(Person& person)
{
	_listPerson.insert({ person->getID(), person });
}

map<string, Person> Family_Model::getListPerson()
{
	return _listPerson;
}

void Family_Model::setListPerson(map<string, Person>& listPerson)
{
	_listPerson = listPerson;
}