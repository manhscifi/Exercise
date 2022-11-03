#pragma once
#include"CanBo.h"

class NhanVien : public CanBo
{
private:
	string mTask;
public:
	NhanVien();
	NhanVien(string name, int age, string gender, string address, string task);
	~NhanVien();
	//set
	void setTask(string task);
	//get
	string getTask();
};
