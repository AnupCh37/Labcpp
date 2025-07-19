/*Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.*/
#include <iostream>
using namespace std;
class Int
{
private:
    int x;

public:
    Int() : x(0.0) {}
    Int(int i) : x(i) {}
    void getdata()
    {
        cout << "Enter the value of the integer:" << endl;
        cin >> x;
    }

    bool operator==(Int &i)
    {
        if (x == i.x)
            return true;
        else
            return false;
    }
    bool operator<(Int &i)
    {
        if (x < i.x)
            return true;
        else
            return false;
    }
    bool operator>(Int &i)
    {
        if (x > i.x)
            return true;
        else
            return false;
    }
    bool operator!=(Int &i)
    {
        if (x != i.x)
            return true;
        else
            return false;
    }
    bool operator<=(Int &i)
    {
        if (x <= i.x)
            return true;
        else
            return false;
    }

    bool operator>=(Int &i)
    {
        if (x >= i.x)
            return true;
        else
            return false;
    }
};
int main()
{
    Int i1(100), i2;
    i2.getdata();
    if (i1 == i2)
    {
        cout << "The objects are equal" << endl;
    }
    if (i1 < i2)
    {
        cout << "The object  i1 is lesser then object i2" << endl;
    }
    if (i1 > i2)
    {
        cout << "The object i1 is greater the object i2" << endl;
    }
    if (i1 != i2)
    {
        cout << "The object i1 is not equal to object i2" << endl;
    }
    if (i1 >= i2)
        cout << "The object i1 is greater or equal to object i2" << endl;
    if (i1 <= i2)
        cout << "The object i1 is lesser or equal to object i2" << endl;
    return 0;
}