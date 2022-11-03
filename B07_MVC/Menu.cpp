#include "Menu.h"
Menu::Menu()
{
    run();
}

void Menu::run()
{
    shared_ptr<Teacher_Manage> manage = make_shared<Teacher_Manage>();
    
    while (true) {
        cout << "Teacher Management\n";
        cout << "Enter 1: Insert new teacher\n";
        cout << "Enter 2: Detele teacher by ID\n";
        cout << "Enter 3: Calculator real salery by ID\n";
        cout << "Enter 4: Show teacher information\n";
        cout << "Enter 5: To exit\n\n";
        int op;
        cin >> op;

        switch (op)
        {
        case Insert:
            system("cls");
            cout << "\tInsert new teacher:\n";
            manage->addTeacher();
            cout << "Added\n\n";
            break;

        case Detele:
        {
            system("cls");
            cout << "\tDetele teacher by ID:\n";
            manage->deleteTeacherByID();
            cout << "\n";
            break;
        }
        case Calculator:
        {
            system("cls");
            cout << "\tCalculator real salery by ID:\n";
            cout << "Real salery: " << manage->calculateRealSalaryByID() << endl;
            cout << "\n";
            break;
        }
        case Display:
        {
            system("cls");
            cout << "\tShow information\n";
            manage->printListTeacher();
            cout << "\n";
            break;
        }
        case Exit:
        {
            exit(0);
            break;
        }
        default:
            cout << "Invalid\n";
        }
    }
}
