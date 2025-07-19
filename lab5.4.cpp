/* Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators */
#include <iostream>
using namespace std;
class Date
{
private:
    int yrs;
    int mnth;
    int day;

public:
    Date() : yrs(0), mnth(0), day(0) {}
    Date(int y, int m, int d) : yrs(y), mnth(m), day(d) {}
    void getdata()
    {
        cout << "Enter the date(yrs/mnth/day):" << endl;
        cin >> yrs >> mnth >> day;
    }
    void showdata()
    {
        cout << "The date is:" << endl;
        cout << yrs << "/" << mnth << "/" << day << endl;
    }
    Date operator++()
    {
        Date temp;
        temp.day = ++day;
        temp.mnth = mnth;
        temp.yrs = yrs;
        if (mnth == 1 or mnth == 3 or mnth == 5 or mnth == 7 or mnth == 8 or mnth == 10 or mnth == 12)
        {
            if (temp.day > 31)
            {
                temp.day -= 31;
                ++temp.mnth;
            }
        }

        if (mnth == 4 or mnth == 6 or mnth == 9 or mnth == 11)
        {
            if (temp.day > 30)
            {
                temp.day -= 30;
                ++temp.mnth;
            }
        }
        if ((yrs % 4 == 0 and yrs % 100 != 0) or yrs % 400 == 0)
        {
            if (mnth == 2)
            {
                if (temp.day > 29)
                {
                    temp.day -= 29;
                    ++temp.mnth;
                }
            }
        }
        else
        {
            if (mnth == 2)
            {
                if (temp.day > 28)
                {
                    temp.day -= 28;
                    ++temp.mnth;
                }
            }
        }
        if (temp.mnth > 12)
        {
            temp.mnth -= 12;
            ++temp.yrs;
        }
        return temp;
    }
    Date operator++(int)
    {
        Date temp;
        temp.day = day++;
        temp.mnth = mnth;
        temp.yrs = yrs;
        if (mnth == 1 or mnth == 3 or mnth == 5 or mnth == 7 or mnth == 8 or mnth == 10 or mnth == 12)
        {
            if (temp.day > 31)
            {
                temp.day -= 31;
                ++temp.mnth;
            }
        }
        if (mnth == 4 or mnth == 6 or mnth == 9 or mnth == 11)
        {
            if (temp.day > 30)
            {
                temp.day -= 30;
                temp.mnth++;
            }
        }
        if ((yrs % 4 == 0 and yrs % 100 != 0) or yrs % 400 == 0)
        {
            if (mnth == 2)
            {
                if (temp.day > 29)
                {
                    temp.day -= 29;
                    temp.mnth++;
                }
            }
        }
        else
        {
            if (mnth == 2)
            {
                if (temp.day > 28)
                {
                    temp.day -= 28;
                    temp.mnth++;
                }
            }
        }
        if (temp.mnth > 12)
        {
            temp.mnth -= 12;
            temp.yrs++;
        }
        return temp;
    }
};
int main()
{
    Date d1(2004, 12, 31), d2, d3, d4;
    d2.getdata();
    d3 = ++d1;
    d4 = d2++;
    d1.showdata();
    d2.showdata();
    d3.showdata();
    d4.showdata();
    return 0;
}