//Dsbaral
/*Write a program that has a class to represent time. The class should have constructors
to initialize data members hour, minute, and second to 0 and to initialize them to values 
passed as arguments. The class should have a member function to add time objects and return
the result as a time object. There should be functions to display time in 12-hour and 24-hour format. */
#include <iostream>
using namespace std;
class Time
{
private:
    int hrs;
    int min;
    int sec;

public:
    Time() : hrs(0), min(0), sec(0) {};
    Time(int h, int m, int s) : hrs(h), min(m), sec(s) {}

    void getdata()
    {
        cout << "Enter time in hr/min/sec format:" << endl;
        cin >> hrs >> min >> sec;
    }
    void showdata()
    {
        cout << "The time in hr/min/sec is :" << endl;
        cout << hrs << "/" << min << "/" << sec << endl;
    }
    void show24() const
    {
        cout << "The time in 24-hours is:" << endl;
        cout << hrs << "/" << min << "/" << sec << endl;
    }
    void show12() const
    {

        int chrs;
        if (hrs > 12)
        {
            chrs = hrs - 12;
        }

        cout << "The time in 12-hours is:" << endl;
        cout << chrs << "/" << min << "/" << sec << endl;
    }

public:
    Time addtime(Time);
};
Time Time::addtime(Time t2)
{
    Time temp;
    temp.sec = sec + t2.sec;
    temp.min = min + t2.min;
    if (temp.sec >= 60)
    {
        temp.sec -= 60;
        temp.min++;
    }
    temp.hrs = hrs + t2.hrs;
    if (temp.min >= 60)
    {
        temp.min -= 60;
        temp.hrs++;
    }
    return temp;
}
int main()
{
    Time t1(7, 50, 15), t2, t3;
    t2.getdata();
    t3 = t1.addtime(t2);
    t3.show12();
    t3.show24();
    return 0;
}
