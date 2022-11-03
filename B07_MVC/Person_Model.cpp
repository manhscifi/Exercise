#include"Person_Model.h"

Person_Model::Person_Model()
{
    _name = "";
    _age = 0;
    _hometown = "";
}

Person_Model::Person_Model(string name, int age, string hometown)
{
    _name = name;
    _age = age;
    _hometown = hometown;
}

string Person_Model::getName()
{
    return _name;
}

void Person_Model::setName(string name)
{
    _name = name;
}

int Person_Model::getAge()
{
    return _age;
}

void Person_Model::setAge(int age)
{
    _age = age;
}

string Person_Model::getHomeTown()
{
    return _hometown;
}

void Person_Model::setHomeTown(string hometown) {
    _hometown = hometown;
}
