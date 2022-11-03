#include "Menu.h"

Menu::Menu()
{
    run();
}

void Menu::run()
{
    shared_ptr<StudentManager> manage = make_shared<StudentManager>();

    while (true)
    {
        cout << "\t_Student Management_\n";
        cout << "Enter " << addGoodStudent << ": Add good student\n";
        cout << "Enter " << addNormalStudent << ": Add normal student\n";
        cout << "Enter " << displayListStudent << ": Show information\n";
        cout << "Enter " << displayQualifiedStudents << ": Qualified student\n";
        cout << "Enter " << exitProgram << ": Exit\n\n";

        cout << "Option: ";
        int option = UserInput<int>::input();

        switch (option)
        {
        case addGoodStudent:
        {
            system("cls");
            cout << "\tAdd good student:\n";
            manage->addStudent(GoodType);
            break;
        }
        case addNormalStudent:
        {
            system("cls");
            cout << "\tAdd normal student:\n";
            manage->addStudent(NormalType);
            break;
        }
        case displayListStudent:
        {
            system("cls");
            cout << "\tShow information:\n";
            manage->printListStudent();
            break;
        }
        case displayQualifiedStudents:
        {
            system("cls");
            cout << "\tQualified students:\n";
            manage->printQualifiedStudent();
            break;
        }
        case exitProgram:
        {
            system("cls");
            exit(0);
            break;
        }
        default:
        {
            system("cls");
            cout << "Option 1 - " << exitProgram << ".\n\n";
        }
        }
    }
}