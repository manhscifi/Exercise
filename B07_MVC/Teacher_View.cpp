#include "Teacher_View.h"

string Teacher_View::inputName()
{
	string name;
	cout << "Enter teacher name: ";
	cin.ignore();
	getline(cin, name);
	return name;
}
int Teacher_View::inputAge()
{
	int age;
	cout << "Enter teacher age: ";
	cin >> age;
	return age;
}
string Teacher_View::inputHomeTown()
{
	string hometown;
	cout << "Enter teacher home town: ";
	cin.ignore();
	getline(cin, hometown);
	return hometown;
}
string Teacher_View::inputTeacherID()
{
	string teacherID;
	cout << "Enter teacher ID: ";
	getline(cin, teacherID);
	return teacherID;
}
double Teacher_View::inputSalery()
{
	double salery;
	cout << "Enter teacher salery: ";
	cin >> salery;
	return salery;
}
double Teacher_View::inputBonus()
{
	double bonus;
	cout << "Enter teacher bonus: ";
	cin >> bonus;
	return bonus;
}
double Teacher_View::inputPenaty()
{
	double penaty;
	cout << "Enter teacher penaty: ";
	cin >> penaty;
	return penaty;
}
double Teacher_View::inputRealSalery()
{
	double realSalery;
	cout << "Enter teacher real salery: ";
	cin >> realSalery;
	return realSalery;
}
void Teacher_View::printTeacher(string name, int age, string hometown, string teacherID, double salery, double bonus, double penaty, double realSalery)
{
	cout << "Teacher name: " << name << endl;
	cout << "Teacher age: " << age << endl;
	cout << "Teacher home town: " << hometown << endl;
	cout << "Teacher ID: " << teacherID << endl;
	cout << "Teacher salery: " << bonus << endl;
	cout << "Teacher bonus: " << salery << endl;
	cout << "Teacher penaty: " << penaty << endl;
	//cout << "Teacher real salery: " << realSalery << endl;
}