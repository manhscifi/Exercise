#include"StudentManager.h"

void StudentManager::addStudent(int type)
{
	shared_ptr<Student> student;

	string fullName = View::inputFullName();
	string doB = View::inputDoB();
	string gender = View::inputGender();
	string phoneNumber = View::inputPhoneNumber();
	string universityName = View::inputUniversityName();
	string gradeLevel = View::inputGradeLevel();

	if (type == GoodType)
	{
		double GPA = View::inputGPA();
		string bestRewardName = View::inputBestRewardName();
		cout << "\n";

		student = make_shared<GoodStudent>(fullName, doB, gender, phoneNumber, universityName, gradeLevel,
			GPA, bestRewardName);
	}
	if (type == NormalType)
	{
		int englishScore = View::inputEnglishScore();
		double entryTestScore = View::inputEntryTestScore();
		cout << "\n";

		student = make_shared<NormalStudent>(fullName, doB, gender, phoneNumber, universityName, gradeLevel,
			englishScore, entryTestScore);
	}
	mListStudent.push_back(student);
}

int StudentManager::getQuantityOfStudentType(int type)
{
	int count = 0;
	for (auto i = mListStudent.begin(); i != mListStudent.end(); i++)
	{
		if ((*i)->getStudentType() == type)
		{
			count++;
		}
	}
	return count;
}


//sort student by good, normal
bool StudentManager::compareStudentType(const shared_ptr<Student>& a, const shared_ptr<Student>& b)
{
	if (a->getStudentType() < b->getStudentType())
	{
		return true;
	}
	return false;
}
//sort good student by gpa, if same gpa, then sort by fullname
bool StudentManager::compareGoodStudent(const shared_ptr<Student>& a, const shared_ptr<Student>& b)
{
	auto tempA = dynamic_pointer_cast<GoodStudent>(a);
	auto tempB = dynamic_pointer_cast<GoodStudent>(b);

	if (tempA->getGPA() > tempB->getGPA())
	{
		return true;
	}
	if (tempA->getGPA() < tempB->getGPA())
	{
		return false;
	}

	if (tempA->getFullName() < tempB->getFullName())
	{
		return true;
	}

	return false;
}
//sort noraml student by EntryTestScore->EnglishScore->fullname
bool StudentManager::compareNormalStudent(const shared_ptr<Student>& a, const shared_ptr<Student>& b)
{
	auto tempA = dynamic_pointer_cast<NormalStudent>(a);
	auto tempB = dynamic_pointer_cast<NormalStudent>(b);

	if (tempA->getEntryTestScore() > tempB->getEntryTestScore())
	{
		return true;
	}
	if (tempA->getEntryTestScore() < tempB->getEntryTestScore())
	{
		return false;
	}

	if (tempA->getEnglishScore() > tempB->getEnglishScore())
	{
		return true;
	}
	if (tempA->getEnglishScore() < tempB->getEnglishScore())
	{
		return false;
	}

	if (tempA->getFullName() < tempB->getFullName())
	{
		return true;
	}

	return false;
}

void StudentManager::sortListStudent()
{
	//[good, normal, nomarl, good, ...] -> [good, good,... good, normal...normal]
	sort(mListStudent.begin(), mListStudent.end(), &compareStudentType);
	//sort only good student
	int numOfGoodStudentInList = getQuantityOfStudentType(GoodType);
	sort(mListStudent.begin(), mListStudent.begin() + numOfGoodStudentInList, &compareGoodStudent);
	//sort only normal student
	sort(mListStudent.begin() + numOfGoodStudentInList, mListStudent.end(), &compareNormalStudent);
}

void StudentManager::printQualifiedStudent()
{
	if (mListStudent.size() >= 11 && mListStudent.size() <= 15)
	{
		unsigned quantity;
		bool valid;
		do
		{
			quantity = View::inputQuantity();
			valid = (quantity <= mListStudent.size());
			if (!valid)
			{
				cout << "Exeed number of students in list: " << mListStudent.size() << endl;
			}
		} while (!valid);
		cout << "\n";

		sortListStudent();		

		for (auto i = mListStudent.begin(); i < mListStudent.begin() + quantity; i++)
		{
			if (dynamic_pointer_cast<GoodStudent>(*i))
			{
				auto temp = dynamic_pointer_cast<GoodStudent>((*i));
				View::printGoodStudent(temp->getFullName(), temp->getDoB(), temp->getGender(), temp->getPhoneNumber(),
					temp->getUniversityName(), temp->getGradeLevel(),
					temp->getGPA(), temp->getBestRewardName());
			}
			else
			{
				auto temp = dynamic_pointer_cast<NormalStudent>((*i));
				View::printNormalStudent(temp->getFullName(), temp->getDoB(), temp->getGender(), temp->getPhoneNumber(),
					temp->getUniversityName(), temp->getGradeLevel(),
					temp->getEnglishScore(), temp->getEntryTestScore());
			}
		}
	}
	else
	{
		cout << "Enter 11-15 students.\nYou have entered: " << mListStudent.size() << endl;
		cout << "\n";
	}
}

void StudentManager::printListStudent()
{
	if (mListStudent.size())
	{
		sortListStudent();

		for (auto i = mListStudent.begin(); i != mListStudent.end(); i++)
		{
			if (dynamic_pointer_cast<GoodStudent>(*i))
			{
				shared_ptr<GoodStudent> temp = dynamic_pointer_cast<GoodStudent>((*i));
				View::printGoodStudent(temp->getFullName(), temp->getDoB(), temp->getGender(), temp->getPhoneNumber(),
					temp->getUniversityName(), temp->getGradeLevel(),
					temp->getGPA(), temp->getBestRewardName());
			}
			else
			{
				shared_ptr<NormalStudent> temp = dynamic_pointer_cast<NormalStudent>((*i));
				View::printNormalStudent(temp->getFullName(), temp->getDoB(), temp->getGender(), temp->getPhoneNumber(),
					temp->getUniversityName(), temp->getGradeLevel(),
					temp->getEnglishScore(), temp->getEntryTestScore());
			}			
		}
	}
	else
	{
		cout << "Empty.\n";
	}
}