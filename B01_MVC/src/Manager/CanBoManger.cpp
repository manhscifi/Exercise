#include "CanBoManger.h"

void CanBoManger::addtOfficer(int type)
{
	shared_ptr<CanBoControl> canbo = make_shared<CanBoControl>();
	canbo->inputCanBo(type);
	mListOfficer.push_back(canbo);
}
void CanBoManger::searcOfficerByhName()
{
	if (mListOfficer.empty())
	{
		cout << "Empty.\n";
	}
	else
	{
		int flag = 0;
		string name = View::inputName(); 
		cout << "\n";
		transform(name.begin(), name.end(), name.begin(), ::tolower);
		for (auto i = mListOfficer.begin(); i != mListOfficer.end(); i++)
		{
			string tempName = (*i)->getName();
			transform(tempName.begin(), tempName.end(), tempName.begin(), ::tolower);
			if (name==tempName)
			{
				(*i)->printCanBo();
				flag++;
				break;
			}
		}
		if (flag)
		{
			cout << "Found.\n";
		}
		else
		{
			cout << "Not found.\n";
		}
	}
}
void CanBoManger::printListOfficer()
{
	if (mListOfficer.empty())
	{
		cout << "Empty.\n";
	}
	else
	{
		for (auto i = mListOfficer.begin(); i != mListOfficer.end(); i++)
		{
			(*i)->printCanBo();
		}
	}
}