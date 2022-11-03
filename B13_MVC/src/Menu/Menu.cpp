#include"Menu.h"

Menu::Menu()
{
    run();
}

void Menu::run()
{
    Manager manage;

    while (true)
    {
        cout << "\tEmployee Management\n";
        cout << "Enter " << insert << ": Add new employee\n";
        cout << "Enter " << edit << ": Edit employee by ID\n";
        cout << "Enter " << detele << ": Detele employee by ID\n";
        cout << "Enter " << display << ": Show employee information\n";
        cout << "Enter " << findEmployee << ": Find employee by type\n";
        cout << "Enter " << numberOfEmployeeAddInThisSession << ": Number of employee added in this session\n";
        cout << "Enter " << exitProgram << ": Exit\n\n";

        cout << "Option: ";
        int option1 = UserInput<int>::input();

        switch (option1)
        {
        case insert:
        {
            system("cls");
            cout << "\tInsert new employee:\n";
            cout << "Enter " << (char)experienceEmployee << ": Add Experience employee\n";
            cout << "Enter " << (char)fresherEmployee << ": Add Fresher employee\n";
            cout << "Enter " << (char)internEmployee << ": Add Intern employee\n\n";

            cout << "Option: ";
            char option2 = UserInput<char>::input();

            switch (option2)
            {
            case experienceEmployee:
            {
                system("cls");
                cout << "\tAdd Experience employee\n";
                manage.addEmployee(ExperienceType);
                cout << "\n";
                break;
            }
            case fresherEmployee:
            {
                system("cls");
                cout << "\tAdd Fresher employee\n";
                manage.addEmployee(FresherType);
                cout << "\n";
                break;
            }
            case internEmployee:
            {
                system("cls");
                cout << "\tAdd Intern employee\n";
                manage.addEmployee(InternType);
                cout << "\n";
                break;
            }
            default:
            {
                system("cls");
                cout << "Option a-b-c.\n\n";
            }
            }
            break;
        }
        case edit:
        {
            system("cls");
            cout << "\tEdit employee by ID:\n";
            manage.editEmployeeByID();
            cout << "\n";
            break;
        }
        case detele:
        {
            system("cls");
            cout << "\tDetele employee by ID:\n";
            manage.deleteEmployeeByID();
            cout << "\n";
            break;
        }
        case display:
        {
            system("cls");
            cout << "\tShow employee information\n";
            manage.printListEmployee();
            cout << "\n";
            break;
        }
        case findEmployee:
        {
            system("cls");
            cout << "\tInsert new employee:\n";
            cout << "Enter " << (char)experienceEmployee << ": Find Experience employee\n";
            cout << "Enter " << (char)fresherEmployee << ": Find Fresher employee\n";
            cout << "Enter " << (char)internEmployee << ": Find Intern employee\n\n";

            cout << "Option: ";
            char option3 = UserInput<char>::input();

            switch (option3)
            {
            case experienceEmployee:
            {
                system("cls");
                cout << "\tFind Experience employee\n";
                manage.findEmployeeByType(ExperienceType);
                cout << "\n";
                break;
            }
            case fresherEmployee:
            {
                system("cls");
                cout << "\tFind Fresher employee\n";
                manage.findEmployeeByType(FresherType);
                cout << "\n";
                break;
            }
            case internEmployee:
            {
                system("cls");
                cout << "\tFind Intern employee\n";
                manage.findEmployeeByType(InternType);
                cout << "\n";
                break;
            }
            default:
            {
                system("cls");
                cout << "Option a-b-c.\n\n";
            }
            }
            break;
        }
        case numberOfEmployeeAddInThisSession:
        {
            system("cls");
            cout << "\tNumber of employee added in this session\n";
            manage.getNumberOfEmployeeAdded();
            cout << "\n";
            break;
        }
        case exitProgram:
        {
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
