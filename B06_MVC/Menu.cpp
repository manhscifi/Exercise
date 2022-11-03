#include "Menu.h"

Menu::Menu()
{
	School_Manage manage;

	while (true)
	{
		cout << "Student Management\n";
		cout << "Enter 1: Insert new student\n";
		cout << "Enter 2: Display 20-year-old students\n";
		cout << "Enter 3: Display 23-year-old students from DN\n";
		cout << "Enter 4: Display all students\n";
		cout << "Enter 5: To exit\n\n";
		int op;
		cin >> op;
		switch (op)
		{
		case Insert:
		{
			system("cls");
			cout << "\tInsert new student\n";
			manage.addStudent();
			cout << "\n";
			break;
		}
		case DisplayStudentAge20:
		{	
			system("cls");
			cout << "\tDisplay 20-year-old students\n";
			manage.printListStudentAge20();
			cout << "\n";
			break;
		}
		case DisplayStudentAge23HomeDN:
		{
			system("cls");
			cout << "\tDisplay 23-year-old students from DN\n";
			manage.DisplayStudentAge23HomeDN();
			cout << "\n";
			break;
		}
		case DisplayStudent:
		{
			system("cls");
			cout << "\tDisplay all students\n";
			manage.printListStudent();
			cout << "\n";
			break;
		}
		case Exit:
			exit(0);
		default:
			break;
		}
	}
}