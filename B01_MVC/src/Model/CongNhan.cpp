#include"CongNhan.h"

CongNhan::CongNhan() : CanBo()
{
	mLevel = -1;
}
CongNhan::CongNhan(string name, int age, string gender, string address, int level) : CanBo(name, age, gender, address)
{
	mLevel = level;
}
CongNhan::~CongNhan(){}
//set
void CongNhan::setLevel(int level)
{
	mLevel = level;
}
//get
int CongNhan::getLevel()
{
	return mLevel;
}