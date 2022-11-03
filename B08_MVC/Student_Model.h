#pragma once
#include<iostream>
using namespace std;

class Student_Model
{
private:
    string _name;
    int    _age;
    string _studentClass;

public:
    Student_Model();
    Student_Model(string, int, string);
    ~Student_Model();
    string getName();
    void setName(string);
    int getAge();
    void setAge(int);
    void setStudentClass(string);
    string getStudentClass();
};
