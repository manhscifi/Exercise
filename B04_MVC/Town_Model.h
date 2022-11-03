#pragma once
#include<iostream>
#include<map>
#include<memory>
#include"Family_Model.h"

typedef shared_ptr<Family_Model> Family;

class Town_Model
{
private:
	map<string, Family> _listFamily; //<id of a Family_Model object, smartpointer person point to a Family_Model object>
public:
	void setListFamily(map<string, Family>&);
	map<string, Family> getListFamily();
	void addFamily(Family& family);
};

