#include "CanBoControl.h"

void CanBoControl::inputCanBo(int type)
{
	string name = View::inputName();
	int age = View::inputAge();
	string gender = View::inputGender();
	string address = View::inputAddress();

	if (type == congnhan)
	{
		int level = View::inputLevel();
		canbo = make_shared<CongNhan>(name, age, gender, address, level);
	}
	if (type == kysu)
	{
		string major = View::inputMajor();
		canbo = make_shared<KySu>(name, age, gender, address, major);
	}
	if (type == nhanvien)
	{
		string task = View::inputTask();
		canbo = make_shared<KySu>(name, age, gender, address, task);
	}
}
void CanBoControl::printCanBo()
{
	if (dynamic_pointer_cast<CongNhan>(canbo))
	{
		shared_ptr<CongNhan> temp = dynamic_pointer_cast<CongNhan>(canbo);
		View::printCongNhan(temp->getName(), temp->getAge(), temp->getGender(), temp->getAddress(), temp->getLevel());
	}
	else if (dynamic_pointer_cast<KySu>(canbo))
	{
		shared_ptr<KySu> temp = dynamic_pointer_cast<KySu>(canbo);
		View::printKySu(temp->getName(), temp->getAge(), temp->getGender(), temp->getAddress(), temp->getMajor());
	}
	else
	{
		shared_ptr<NhanVien> temp = dynamic_pointer_cast<NhanVien>(canbo);
		View::printNhanVien(temp->getName(), temp->getAge(), temp->getGender(), temp->getAddress(), temp->getTask());
	}
	cout << "\n";
}

//get
string CanBoControl::getName()
{
	return canbo->getName();
}
int CanBoControl::getAge()
{
	return canbo->getAge();
}
string CanBoControl::getGender()
{
	return canbo->getGender();
}
string CanBoControl::getAddress()
{
	return canbo->getAddress();
}