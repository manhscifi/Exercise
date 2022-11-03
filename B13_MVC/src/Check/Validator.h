#pragma once
#include<iostream>
#include<string>
#include <algorithm>
#include<sstream>
using namespace std;

//valid year
const int MAX_VALID_YR = 2022;
const int MIN_VALID_YR = 1950;
// valid length of name
const int MIN_VALID_NAME = 10;
const int MAX_VALID_NAME = 50;
//valid phone
const int VALID_PHONE_LENGTH = 10;
const char VALID_FIRST_DIGIT = '0';

class Validator
{
public:
    // check valid date.
    static bool checkLeapYear(int year);
    static bool checkDate(string date);
    // check valid name
    static bool checkName(string name);
    // check valid phone
    static bool checkPhone(string phone);
    // check valid email
    static bool checkEmail(string email);
};