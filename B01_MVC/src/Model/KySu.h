#pragma once
#include"CanBo.h"

class KySu : public CanBo
{
private:
	string mMajor;
public:
	KySu();
	KySu(string name, int age, string gender, string address, string major);
	~KySu();
	//set
	void setMajor(string major);
	//get
	string getMajor();
};

