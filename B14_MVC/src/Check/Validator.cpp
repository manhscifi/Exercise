#include "Validator.h"

bool Validator::checkLeapYear(int year)
{
    // Leap year is a multiple of 4 and not multiple of 100 or is multiple of 400.
    return (((year % 4 == 0) &&
        (year % 100 != 0)) ||
        (year % 400 == 0));
}

bool Validator::checkDate(string date)
{   
    //format dd/mm/yyyy
    //true if date has 10 characters
    bool validLength = (date.size() == VALID_PHONE_LENGTH);
    bool validForm = false;
    bool validCharactor = false;
    if (validLength)
    {   
        //true if all characters are digits or '/'
        validCharactor = all_of(date.begin(), date.end(), [](const char& c)
            { return isdigit(c) || c == '/'; });
        if (validCharactor)
        {
            //check positions of '/'
            validForm = (date[2] == '/') && date[5] == '/';
        }     
    }
    
    if (validForm && validCharactor && validLength)
    {
        stringstream ss(date);
        int d, m, y;
        char a;
        ss >> d >> a >> m >> a >> y;

        // If year, month and day are not in given range
        if (y > MAX_VALID_YR || y < MIN_VALID_YR)
        {
            return false;
        }
        if (m < 1 || m > 12)
        {
            return false;
        }
        if (d < 1 || d > 31)
        {
            return false;
        }
        // February month with leap year
        if (m == 2)
        {
            if (checkLeapYear(y))
            {
                return (d <= 29);
            }
            else
            {
                return (d <= 28);
            }
        }

        // Months of April, June, Sept and Nov must have number of days less than 31.
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            return (d <= 30);
        }

        return true;
    }
    return false;
}

bool Validator::checkName(string name)
{
   //true if name is in given size
   bool validLength = name.length() >= MIN_VALID_NAME && name.length() <= MAX_VALID_NAME;
  
   bool validCharactor = false;
   if (validLength)
   {
       //true if name only contains characters and space
       validCharactor = all_of(name.begin(), name.end(), [](const char& c)
           { return isalpha(c) || c == ' '; });
   }

   return validLength && validCharactor;
}

bool Validator::checkPhone(string phone)
{
    //true if 10 characters
    bool validLength = (phone.size() == VALID_PHONE_LENGTH);
    
    bool validFirst3Digit = false;
    bool validCharactor = false;
    if(validLength)
    {
        //true if all characters are digits
       validCharactor = all_of(phone.begin(), phone.end(), isdigit);
       if (validCharactor)
       {
           //true if 3 first digits in the given options
           validFirst3Digit = find(VALID_FIRST_3DIGIT.begin(), VALID_FIRST_3DIGIT.end(), phone.substr(0, 3)) != VALID_FIRST_3DIGIT.end();
       }
    }
    
    return validLength && validFirst3Digit && validCharactor;
}