#pragma once
#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
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
const vector<string> VALID_FIRST_3DIGIT = { "090", "098", "091","031" , "035", "038"};

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
};

