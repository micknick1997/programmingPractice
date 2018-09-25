//Program to check if a given year is leap year
#include <iostream>

using namespace std;

// if year is divisible by 400 then is_leap_year
// else if year is divisible by 100 then not_leap_year
// else if year is divisible by 4 then is_leap_year
// else not_leap_year
bool checkYear(int year)
{
    if (year % 400 == 0)
    {
        cout << year << " is a leap year!" << endl;
        return true;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year" << endl;
        return false;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year!" << endl;
        return true;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
        return false;
    }
}

// main
int main()
{
    int year = 2000;
    checkYear(year);
    return 0;
}