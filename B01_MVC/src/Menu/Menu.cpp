#include"Menu/Menu.h"

Menu::Menu()
{
    run();
}

void Menu::run()
{
    shared_ptr<CanBoManger> manage = make_shared<CanBoManger>();

    while (true)
    {
        cout << "\tOfficer Management\n";
        cout << "[" << addCongNhan<<"] Them cong nhan moi\n";
        cout << "[" << addKySu<<"] Them ky su moi\n";
        cout << "[" << addNhanVien << "] Them nhan vien moi\n";
        cout << "[" << searchByName << "] Tim kiem can bo bang ten\n";
        cout << "[" << display << "] Hien thi list can bo\n";
        cout << "[" << exitProgram << "] Thoat chuong trinh\n\n";

        cout << "Option: ";
        int option = UserInput<int>::input();

        switch (option)
        {
        case addCongNhan:
        {
            system("cls");
            cout << "\tThem cong nhan moi:\n";
            manage->addtOfficer(congnhan);
            cout << "\n";
            break;
        }
        case addKySu:
        {
            system("cls");
            cout << "\tThem ky su moi:\n";
            manage->addtOfficer(kysu);
            cout << "\n";
            break;
        }
        case addNhanVien:
        {
            system("cls");
            cout << "\tThem nhan vien moi:\n";
            manage->addtOfficer(nhanvien);
            cout << "\n";
            break;
        }
        case searchByName:
        {
            system("cls");
            cout << "\tTim kiem can bo bang ten:\n";
            manage->searcOfficerByhName();
            cout << "\n";
            break;
        }
        case display:
        {
            system("cls");
            cout << "\tHien thi list can bo:\n";
            manage->printListOfficer();
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
