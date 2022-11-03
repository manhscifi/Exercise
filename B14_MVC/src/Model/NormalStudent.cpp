#include "NormalStudent.h"

NormalStudent::NormalStudent() : Student()
{
    mEnglishScore = 0;
    mEntryTestScore = 0;
    mStudentType = NormalType;
}
NormalStudent::NormalStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
    int englishScore, double entryTestScore) : Student(fullName, doB, gender, phoneNumber, universityName, gradeLevel)
{
    mEnglishScore = englishScore;
    mEntryTestScore = entryTestScore;
    mStudentType = NormalType;
}
NormalStudent::~NormalStudent()
{

}

//set
void NormalStudent::setEnglishScore(int englishScore)
{
    mEnglishScore = englishScore;
}
void NormalStudent::setEntryTestScore(double entryTestScore)
{
    mEntryTestScore = entryTestScore;
}
//get
int NormalStudent::getEnglishScore()  const
{
    return mEnglishScore;
}
double NormalStudent::getEntryTestScore()  const
{
    return mEntryTestScore;
}