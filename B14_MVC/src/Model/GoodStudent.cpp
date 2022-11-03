#include "GoodStudent.h"

GoodStudent::GoodStudent():Student()
{
    mGPA = 0;
    mBestRewardName = "";
    mStudentType = GoodType;
}
GoodStudent::GoodStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
    double GPA, string bestRewardName) : Student(fullName, doB, gender, phoneNumber, universityName, gradeLevel)
{
    mGPA = GPA;
    mBestRewardName = bestRewardName;
    mStudentType = GoodType;
}
GoodStudent::~GoodStudent()
{}

//set
void GoodStudent::setGPA(double GPA)
{
    mGPA = GPA;
}
void GoodStudent::setBestRewardName(string bestRewardName)
{
    mBestRewardName = bestRewardName;
}
//get
double GoodStudent::getGPA()  const
{
    return mGPA;
}
string GoodStudent::getBestRewardName()  const
{
    return mBestRewardName;
}