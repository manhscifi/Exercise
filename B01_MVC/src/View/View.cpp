#include "View.h"

//input canbo
string View::inputName()
{
	string name;
	cout << "Type name: ";
	do
	{
		getline(cin, name);
		if (name.empty())
		{
			cout << "Type again: \n";
		}
	} while (name.empty());

	return name;
}
int View::inputAge()
{
	int age;
	cout << "Type age: ";
	do
	{
		age = UserInput<int>::input();
		if (age < 18)
		{
			cout << "Type again: \n";
		}
	} while (age < 18);

	return age;
}
string View::inputGender()
{
	string gender;
	cout << "Type gender: ";
	do
	{
		getline(cin, gender);
		if (gender.empty())
		{
			cout << "Type again: \n";
		}
	} while (gender.empty());

	return gender;
}
string View::inputAddress()
{
	string address;
	cout << "Type address: ";
	do
	{
		getline(cin, address);
		if (address.empty())
		{
			cout << "Type again: \n";
		}
	} while (address.empty());

	return address;
}
//input congnhan
int View::inputLevel()
{
	int level;
	cout << "Type level: ";
	do
	{
		level = UserInput<int>::input();
		if (level < 1 || level > 10)
		{
			cout << "Type again: \n";
		}
	} while (level < 1 || level > 10);

	return level;
}
//input kysu
string View::inputMajor()
{
	string major;
	cout << "Type major: ";
	do
	{
		getline(cin, major);
		if (major.empty())
		{
			cout << "Type again: \n";
		}
	} while (major.empty());

	return major;
}
//input nhanvien
string View::inputTask()
{
	string task;
	cout << "Type task: ";
	do
	{
		getline(cin, task);
		if (task.empty())
		{
			cout << "Type again: \n";
		}
	} while (task.empty());

	return task;
}
//print
void View::printCongNhan(string name, int age, string gender, string address, int level)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Address: " << address << endl;
	cout << "Level: " << level << endl;
	cout << "_____________________\n";
}
void View::printKySu(string name, int age, string gender, string address, string major)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Address: " << address << endl;
	cout << "Major: " << major << endl;
	cout << "_____________________\n";
}
void View::printNhanVien(string name, int age, string gender, string address, string task)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Address: " << address << endl;
	cout << "Task: " << task << endl;
	cout << "_____________________\n";
}
