#include "View.h"

string View::inputFullName()
{
	string fullName;

	while (true)
	{
		cout << "Enter student fullname: ";
		try
		{
			getline(cin, fullName);

			if (Validator::checkName(fullName) == false)
			{
				throw InvalidFullNameException("Invalid name.");
			}
		}
		catch (InvalidFullNameException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return fullName;
}
string View::inputDoB()
{
	string doB;

	while (true)
	{
		cout << "Enter student date of birth: ";
		try
		{
			getline(cin, doB);

			if (Validator::checkDate(doB) == false)
			{
				throw InvalidDOBException("Invalid date of birth.");
			}			
		}
		catch (InvalidDOBException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return doB;
}
string View::inputGender()
{
	string gender;
	bool valid;
	cout << "Enter student gender: ";	
	do
	{
		getline(cin, gender);
		valid = !gender.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	return gender;

}
string View::inputPhoneNumber()
{
	string phoneNumber;

	while (true)
	{
		cout << "Enter student phone mumber: ";
		try
		{
			getline(cin, phoneNumber);

			if (Validator::checkPhone(phoneNumber) == false)
			{
				throw InvalidPhoneNumberException("Invalid phone mumber.");
			}
		}
		catch (InvalidPhoneNumberException& e)
		{
			cout << e.what() << endl;
			continue;
		}
		break;
	}
	return phoneNumber;
}
string View::inputUniversityName()
{
	string universityName;
	bool valid;
	cout << "Enter student university: ";
	do
	{
		getline(cin, universityName);
		valid = !universityName.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);	
	
	return universityName;
}
string View::inputGradeLevel()
{
	string gradeLevel;
	bool valid;
	cout << "Enter student grade level: ";
	do
	{
		getline(cin, gradeLevel);
		valid = !gradeLevel.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	
	return gradeLevel;
}
//input good student
double View::inputGPA()
{
	double GPA;
	bool valid;
	cout << "Enter student GPA: ";
	do
	{
		GPA = UserInput<double>::input();
		valid = GPA >= 0 && GPA <= 10;
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return GPA;
}
string View::inputBestRewardName()
{
	string bestRewardName;
	bool valid;
	cout << "Enter student best reward: ";
	do
	{
		getline(cin, bestRewardName);
		valid = !bestRewardName.empty();
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);
	
	
	return bestRewardName;
}
//View::input normal student
int View::inputEnglishScore()
{
	int englishScore;
	bool valid;
	cout << "Enter student english score: ";
	do
	{
		englishScore = UserInput<int>::input();
		valid = englishScore >= 0 && englishScore <= 995 && englishScore % 5 == 0;
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return englishScore;
}
double View::inputEntryTestScore()
{
	double entryTestScore;
	bool valid;
	cout << "Enter student entry test score: ";
	do
	{
		entryTestScore = UserInput<double>::input();
		valid = entryTestScore >= 0 && entryTestScore <= 10;
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return entryTestScore;
}

//View::print good student
void View::printGoodStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
	double GPA, string bestRewardName)
{
	cout << "Student fullName: " << fullName << endl;
	cout << "Student date of birth: " << doB << endl;
	cout << "Student gender: " << gender << endl;
	cout << "Student phone number: " << phoneNumber << endl;
	cout << "Student university: " << universityName << endl;
	cout << "Student grade level: " << gradeLevel << endl;
	cout << "Student GPA: " << GPA << endl;
	cout << "Student best reward: " << bestRewardName << endl;
	cout << "________________________________________\n";
}
//View::print normal student
void View::printNormalStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
	int englishScore, double entryTestScore)
{
	cout << "Student fullName: " << fullName << endl;
	cout << "Student date of birth: " << doB << endl;
	cout << "Student gender: " << gender << endl;
	cout << "Student phone number: " << phoneNumber << endl;
	cout << "Student university: " << universityName << endl;
	cout << "Student grade level: " << gradeLevel << endl;
	cout << "Student english score: " << englishScore << endl;
	cout << "Student entry test score: " << entryTestScore << endl;
	cout << "________________________________________\n";
}

unsigned View::inputQuantity()
{
	unsigned qantity;
	bool valid;
	cout << "Enter qantity of student to recruit: ";
	do
	{
		qantity = UserInput<int>::input();
		valid = qantity > 0;
		if (!valid)
		{
			cout << "Enter again: ";
		}
	} while (!valid);

	return qantity;
}