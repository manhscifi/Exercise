#pragma once
#include"CanBo.h"

class CongNhan : public CanBo
{
private:
	int mLevel;
public:
	CongNhan();
	CongNhan(string name, int age, string gender, string address, int level);
	~CongNhan();
	//set
	void setLevel(int level);
	//get
	int getLevel();	
};

