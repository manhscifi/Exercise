#pragma once
#include "Student.h"
class NormalStudent :
    public Student
{
private:
    int mEnglishScore;
    double mEntryTestScore;
public:
    NormalStudent();
    NormalStudent(string fullName, string doB, string gender, string phoneNumber, string universityName, string gradeLevel,
        int englishScore, double entryTestScore);
    ~NormalStudent();

    //set
    void setEnglishScore(int englishScore);
    void setEntryTestScore(double entryTestScore);
    //get
    int getEnglishScore()  const;
    double getEntryTestScore() const;
};

