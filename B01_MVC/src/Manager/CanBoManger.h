#pragma once
#include"Control/CanBoControl.h"
#include<algorithm>
#include<vector>

class CanBoManger
{
	vector<shared_ptr<CanBoControl>> mListOfficer;
public:
	void addtOfficer(int type);
	void searcOfficerByhName();
	void printListOfficer();
};