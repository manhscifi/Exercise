#include "School_Manage.h"

void School_Manage::addStudent()
{
	Student_Model model;
	Student_View view;
	shared_ptr<Student_Control> student = make_shared<Student_Control>(model, view);
	student->intputStudent();
	_listStudent.push_back(student);
}

void School_Manage::printListStudent()
{
	int flag = 0;
	for (auto i = _listStudent.begin(); i != _listStudent.end(); i++)
	{
		(*i)->printStudent();
		cout << "\n";
		flag++;
	}
	if (!flag)
	{
		cout << "Student list is empty.\n";
	}
}

void School_Manage::printListStudentAge20()
{
	int flag = 0;
	for (auto i = _listStudent.begin(); i != _listStudent.end(); i++)
	{
		int age = (*i)->getAge();		
		if (age == 20)
		{
			(*i)->printStudent();
			cout << "\n";
			flag++;
		}
	}
	if (!flag)
	{
		cout << "No 20-year-old students.\n";
	}
}

void School_Manage::DisplayStudentAge23HomeDN()
{
	int flag = 0;
	for (auto i = _listStudent.begin(); i != _listStudent.end(); i++)
	{
		int age = (*i)->getAge();
		string hometown = (*i)->getHomeTown();

		if (age == 23 && hometown == "DN")
		{
			(*i)->printStudent();
			cout << "\n";
			flag++;
		}
	}
	if (!flag)
	{
		cout << "No 23-year-old students from DN.\n";
	}
}