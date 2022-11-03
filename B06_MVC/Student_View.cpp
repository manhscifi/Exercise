#include "Student_View.h"

string Student_View::inputName()
{
	string name;
	cin.ignore();
	cout << "Enter student name: "; fflush(stdin);
	getline(cin, name);
	return name;
}

int Student_View::inputAge()
{
	int age;
	cout << "Enter student age: ";
	cin >> age;
	return age;
}

string Student_View::inputHomeTown()
{
	string hometown;
	cin.ignore();
	cout << "Enter student home town: "; fflush(stdin);
	getline(cin, hometown);
	return hometown;
}

void Student_View::printStudent(string name, int age, string hometown)
{
	cout << "Student name: " << name << endl;
	cout << "Student age: " << age << endl;
	cout << "Student home town: " << hometown << endl;
}

