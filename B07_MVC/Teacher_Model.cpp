#include "Teacher_Model.h"

Teacher_Model::Teacher_Model() :Person_Model()
{
    _teacherID = "";
    _salary = 0;
    _bonus = 0;
    _penaty = 0;
    _realSalary = 0;
}

Teacher_Model::Teacher_Model(string name, int age, string hometown, string teacherID, double salery, double bonus, double penaty)
    :Person_Model(name, age, hometown)
{
    _teacherID = teacherID;
    _salary = salery;
    _bonus = bonus;
    _penaty = penaty;
}

Teacher_Model::~Teacher_Model()
{

}

string Teacher_Model::getTeacherID()
{
    return _teacherID;
}

void Teacher_Model::setTeacherID(string teacherID)
{
    _teacherID = teacherID;
}


void Teacher_Model::setSalary(double salary)
{
    _salary = salary;
}

double Teacher_Model::getSalary()
{
    return _salary;
}

void Teacher_Model::setBonus(double bonus)
{
    _bonus = bonus;
}

double Teacher_Model::getBonus()
{
    return _bonus;
}

void Teacher_Model::setPenaty(double penaty)
{
    _penaty = penaty;
}

double Teacher_Model::getPenaty()
{
    return _penaty;
}

void Teacher_Model::setRealSalary(double realSalary)
{
    _realSalary = realSalary;
}

double Teacher_Model::getRealSalary()
{
    return _realSalary;
}

