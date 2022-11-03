#include "Menu.h"

Menu::Menu()
{
	run();
}

void Menu::run()
{
    shared_ptr<Manage_Card> manage = make_shared<Manage_Card>();

    while (true) {
        cout << "Book Management\n";
        cout << "Enter 1: Insert new card\n";
        cout << "Enter 2: Detele card by ID\n";
        cout << "Enter 3: Show cards information\n";
        cout << "Enter 4: To exit\n\n";
        int op;
        cin >> op;

        switch (op)
        {
        case Insert:
        {
            system("cls");
            cout << "\tInsert new card\n";
            manage->addCard();
            cout << "Added\n\n";
            break;
        }
        case Detele:
        {
            system("cls");
            cout << "\tDetele card by ID\n";
            manage->deleteByCardID();
            cout << "\n\n";
            break;
        }
        case Display:
        {
            system("cls");
            cout << "\tShow cards information\n";
            manage->printListCard();
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