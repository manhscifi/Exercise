#include "Town_View.h"

int Town_View::inputFamilyNo()
{
	int familyNo;;
	cout << "Enter number of families in town: ";
	cin >> familyNo;
	return familyNo;
}

string Town_View::inputHouseNo()
{
	string houseNo;

	cout << "Enter house number: "; fflush(stdin);
	cin.ignore();
	getline(cin, houseNo);
	return houseNo;
}

int Town_View::inputMemberNo()
{
	int memberNo;
	cout << "Enter number of members: ";
	cin >> memberNo;
	return memberNo;
}

string Town_View::inputName()
{
	string name;
	cout << "Enter name: "; fflush(stdin);
	cin.ignore();
	getline(cin, name);
	return name;
}

int Town_View::inputAge()
{
	int age;
	cout << "Enter age: ";
	cin >> age;
	return age;
}

string Town_View::inputJob()
{
	string job;
	cin.ignore();
	cout << "Enter job: ";
	getline(cin, job);
	return job;
}

string Town_View::inputID()
{
	string id;
	cout << "Enter ID: ";
	getline(cin, id);
	return id;
}

void Town_View::printPerson(string name, int age, string job, string id)
{
	cout << "Person name: " << name << endl;
	cout << "Person age: " << age << endl;
	cout << "Person job: " << job << endl;
	cout << "Person ID: " << id << endl;
}

void Town_View::printFamily(string houseNo, int memberNo, map<string, Person>& listPerson)
{
	cout << "Family house number: " << houseNo << endl;
	cout << "Number of family member: " << listPerson.size() << endl;
	for (auto i = listPerson.begin(); i != listPerson.end(); i++)
	{
		string name = (i->second)->getName();
		int age = (i->second)->getAge();
		string job = (i->second)->getJob();
		string id = (i->second)->getID();
		printPerson(name, age, job, id);
	}
}

void Town_View::printTown(map<string, Family> listFamily)
{
	for (auto i = listFamily.begin(); i != listFamily.end(); i++)
	{
		string houseNo = (i->second)->getHouseNo();
		int memberNo = (i->second)->getMemberNo();
		map<string, Person> listPerson = (i->second)->getListPerson();
		printFamily(houseNo, memberNo, listPerson);
	}
}
