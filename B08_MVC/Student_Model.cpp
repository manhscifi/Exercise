#include "Student_Model.h"

Student_Model::Student_Model()
{
    _name = "";
    _age = 0;
    _studentClass = "";
}

Student_Model::Student_Model(string name, int age, string studentClass)
{
    _name = name;
    _age = age;
    _studentClass = studentClass;
}

Student_Model::~Student_Model()
{

}

string Student_Model::getName()
{
    return _name;
}

void Student_Model::setName(string name)
{
    _name = name;
}

int Student_Model::getAge()
{
    return _age;
}

void Student_Model::setAge(int age)
{
    _age = age;
}

string Student_Model::getStudentClass()
{
    return _studentClass;
}

void Student_Model::setStudentClass(string studentClass)
{
    _studentClass = studentClass;
}

