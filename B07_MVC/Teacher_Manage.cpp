#include "Teacher_Manage.h"

void Teacher_Manage::addTeacher()
{
	Teacher_Model model;
	Teacher_View view;
	shared_ptr<Teacher_Control> teacher = make_shared<Teacher_Control>(model, view);
	teacher->inputTeacher();
	_listTeacher.insert({ teacher->getTeacherID(), teacher });
}

void Teacher_Manage::deleteTeacherByID()
{
	string teacherID;
	cout << "Enter ID: "; 
	cin.ignore();
	getline(cin, teacherID);

	int flag = 0;
	for (auto i = _listTeacher.begin(); i != _listTeacher.end(); i++)
	{
		string ID = i->second->getTeacherID();
		if (teacherID == ID)
		{
			_listTeacher.erase(i);	
			cout << "Deleted.\n";
			cout << "\n";
			flag++;
			break;
		}
	}
	if (!flag)
	{
		cout << "Not found ID " << teacherID << ".\n";
	}
}
double Teacher_Manage::calculateRealSalaryByID()
{
	string teacherID;
	cout << "Enter ID: "; cin.ignore();
	getline(cin, teacherID);

	int flag = 0;
	for (auto i = _listTeacher.begin(); i != _listTeacher.end(); i++)
	{
		string ID = i->second->getTeacherID();
		if (teacherID == ID)
		{
			double salary = i->second->getSalary();
			double bonus = i->second->getBonus();
			double penaty = i->second->getPenaty();
			return salary + bonus - penaty;
			flag++;
			break;
		}
	}
	if (!flag)
	{
		return 0;
	}
}

void Teacher_Manage::printListTeacher()
{
	int flag = 0;
	for (auto i = _listTeacher.begin(); i != _listTeacher.end(); i++)
	{
		{
			i->second->printTeacher();
			cout << "\n";
			flag++;
		}
	}
	if (!flag)
	{
		cout << "Teacher list is empty.\n";
	}
}
