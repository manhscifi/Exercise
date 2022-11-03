#pragma once
#include "Student.h"
class GoodStudent :
    public Student
{
private:
    double mGPA;
    string mBestRewardName;
public:
    GoodStudent();
    GoodStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
        double GPA, string bestRewardName);
    ~GoodStudent();

    //set
    void setGPA(double GPA);
    void setBestRewardName(string bestRewardName);
    //get
    double getGPA() const;
    string getBestRewardName() const;
};

