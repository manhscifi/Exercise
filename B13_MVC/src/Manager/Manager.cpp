#include"Manager.h"

void Manager::addEmployee(int type)
{
	shared_ptr<EmployeeControl> employee = make_shared<EmployeeControl>();
	employee->inputEmployee(type);

	bool validID = checkEmployeeIDExisted(employee->getEmployeeID());
	while (!validID)
	{
		cout << "ID existed.\n";
		employee->inputEmployeeID();
		validID = checkEmployeeIDExisted(employee->getEmployeeID());
	}

	bool validPhone = checkEmployeePhoneExisted(employee->getPhone());
	while (!validPhone)
	{
		cout << "Phone existed.\n";
		employee->inputPhone();
		validPhone = checkEmployeePhoneExisted(employee->getPhone());
	}

	mListEmployee.insert({ employee->getEmployeeID(), employee });
	Employee::EmployeeCountForAddEmployee();
	cout << "Added\n";
}

void Manager::editEmployeeByID()
{
	string ID = View::inputEmployeeID();

	if (!mListEmployee.size())
	{
		cout << "Empty.\n";
	}
	else
	{
		int flag = 0;
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			string tempID = i->second->getEmployeeID();

			if (tempID == ID)
			{
				cout << "Old information: \n";
				i->second->printEmployee();
				cout << "Type new information: \n";
				int tempType = i->second->getEmployeeType();
				i->second->inputEmployee(tempType);
				cout << "Edited.\n";
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			cout << "Not found.\n";
		}
	}
}

void Manager::deleteEmployeeByID()
{
	string ID = View::inputEmployeeID();
	if (!mListEmployee.size())
	{
		cout << "Empty.\n";
	}
	else
	{
		int flag = 0;
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			string tempID = i->second->getEmployeeID();

			if (tempID == ID)
			{
				mListEmployee.erase(i);
				Employee::EmployeeCountForDeleteEmployee();
				cout << "Deleted.\n";
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			cout << "Not found.\n";
		}
	}
}

void Manager::printListEmployee()
{

	if (mListEmployee.size())
	{
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			i->second->printEmployee();
			cout << "\n";
		}
	}
	else
	{
		cout << "Empty.\n";
	}
}

void Manager::getNumberOfEmployeeAdded()
{
	cout << Employee::getEmployeeCount() << endl;
}

void Manager::findEmployeeByType(int employeeType)
{
	if (!mListEmployee.size())
	{
		cout << "Empty.\n";
	}
	else
	{
		int flag = 0;
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			int temp = i->second->getEmployeeType();

			if (temp == employeeType)
			{
				i->second->printEmployee();
				flag++;
			}
		}
		if (!flag)
		{
			cout << "Not found any.\n";
		}
		else
		{
			cout << "Found " << flag << endl;;
		}
	}
}

bool Manager::checkEmployeeIDExisted(string employeeID)
{
	if (mListEmployee.size())
	{
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			if (employeeID == i->second->getEmployeeID())
			{
				return false;
				break;
			}
		}
	}
	return true;
}
bool Manager::checkEmployeePhoneExisted(string employeePhone)
{
	if (mListEmployee.size())
	{
		for (auto i = mListEmployee.begin(); i != mListEmployee.end(); i++)
		{
			if (employeePhone == i->second->getPhone())
			{
				return false;
				break;
			}
		}
	}
	return true;
}