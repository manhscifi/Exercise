#pragma once
#include<iostream>
using namespace std;

class Person_Model
{
private:
    string _name;
    int    _age;
    string _hometown;

public:
    Person_Model();
    Person_Model(string, int, string);
    string getName();
    void setName(string);
    int getAge();
    void setAge(int);
    void setHomeTown(string);
    string getHomeTown();
};
