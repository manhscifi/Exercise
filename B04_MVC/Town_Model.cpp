#include "Town_Model.h"

map<string, Family> Town_Model::getListFamily()
{
	return _listFamily;
}

void Town_Model::setListFamily(map<string, Family>& listFamily)
{
	_listFamily = listFamily;
}

void Town_Model::addFamily(Family& family)
{
	_listFamily.insert({ family->getHouseNo(), family });
}