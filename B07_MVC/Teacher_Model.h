#pragma once
#include"Person_Model.h"

class Teacher_Model :public Person_Model
{
    string _teacherID;
    double _salary;
    double _bonus;
    double _penaty;
    double _realSalary;

public:
    Teacher_Model();
    Teacher_Model(string, int, string, string, double, double, double);
    ~Teacher_Model();
    string getTeacherID();
    void setTeacherID(string);
    void setSalary(double);
    double getSalary();
    void setBonus(double);
    double getBonus();
    void setPenaty(double);
    double getPenaty();
    void setRealSalary(double);
    double getRealSalary();
};
