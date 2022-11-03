#pragma once
#include"Model/CanBo.h"
#include"Model/CongNhan.h"
#include"Model/KySu.h"
#include"Model/NhanVien.h"
#include"View/View.h"
#include<memory>

enum type
{
	congnhan = 0,
	kysu,
	nhanvien
};

class CanBoControl
{
private:
	shared_ptr<CanBo> canbo;
public:
	void inputCanBo(int type);
	void printCanBo();

	//get
	string getName();
	int getAge();
	string getGender();
	string getAddress();
};
