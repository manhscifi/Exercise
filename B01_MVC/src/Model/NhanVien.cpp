#include"NhanVien.h"

NhanVien::NhanVien() : CanBo()
{
	mTask = "";
}
NhanVien::NhanVien(string name, int age, string gender, string address, string task) : CanBo(name, age, gender, address)
{
	mTask = task;
}
NhanVien::~NhanVien() {}
//set
void NhanVien::setTask(string task)
{
	mTask = task;
}
//get
string NhanVien::getTask()
{
	return mTask;
}