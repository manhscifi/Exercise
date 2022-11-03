#include"Menu.h"
#include"Validation.h"

Menu::Menu()
{
	run();
}

void Menu::run()
{
    shared_ptr<ReceiptManager> manage = make_shared<ReceiptManager>();

    while (true) {
        cout << "\tReceipt Management\n";
        cout << "Enter 1: Insert new receipt\n";
        cout << "Enter 2: Edit receipt by house number\n";
        cout << "Enter 3: Detele receipt by house number\n";
        cout << "Enter 4: Calculate payment by house number\n";
        cout << "Enter 5: Show receipts information\n";
        cout << "Enter 6: Exit\n\n";        

        int option = Validation<int>::check();      
        
        switch (option)
        {
        case Insert:
        {
            system("cls");
            cout << "\tInsert new receipt:\n";
            manage->addReceipt();
            cout << "\n";
            break;
        }
        case Edit:
        {
            system("cls");
            cout << "\tEdit receipt by house number:\n";
            manage->editReceipt();
            cout << "\n";
            break;
        }
        case Detele:
        {
            system("cls");
            cout << "\tDetele receipt by house number:\n";
            manage->deteteReipt();
            cout << "\n";
            break;
        }
        case Calculator:
        {
            system("cls");
            cout << "\tCalculate payment by house number:\n";
            cout << "Payment: " << manage->calculatePayment() << endl;
            cout << "\n";
            break;
        }
        case Display:
        {
            system("cls");
            cout << "\tShow receipts information\n";
            manage->printListReceipt();
            cout << "\n";
            break;
        }
        case Exit:
        {
            exit(0);
            break;
        }
        default:
        {
            system("cls");
            cout << "Option 1-6.\n\n";
        }
        }
    }
}