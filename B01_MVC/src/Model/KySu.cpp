#include"KySu.h"

KySu::KySu() :CanBo()
{
	mMajor = "";
}
KySu::KySu(string name, int age, string gender, string address, string major) : CanBo(name, age, gender, address)
{
	mMajor = major;
}
KySu::~KySu(){}
//set
void KySu::setMajor(string major)
{
	mMajor = major;
}
//get
string KySu::getMajor()
{
	return mMajor;
}