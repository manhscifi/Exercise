#include"CanBo.h"

CanBo::CanBo()
{
	mName = "";
	mAge = 0;
	mGender = "";
	mAddress = "";
}
CanBo::CanBo(string name, int age, string gender, string address)
{
	mName = name;
	mAge = age;
	mGender = gender;
	mAddress = address;
}
CanBo::~CanBo(){}
//set
void CanBo::setName(string name)
{
	mName = name;
}
void CanBo::setAge(int age)
{
	mAge = age;
}
void CanBo::setGender(string gender)
{
	mGender = gender;
}
void CanBo::setAddress(string address)
{
	mAddress = address;
}
//get
string CanBo::getName()
{
	return mName;
}
int CanBo::getAge()
{
	return mAge;
}
string CanBo::getGender()
{
	return mGender;
}
string CanBo::getAddress()
{
	return mAddress;
}