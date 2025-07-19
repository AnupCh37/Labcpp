/*Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict */
#include <iostream>
using namespace std;
class ClassB;
class ClassA
{
private:
    int x, y;

public:
    ClassA() : x(0), y(0) {}
    ClassA(int a, int b) : x(a), y(b) {}
    float isX() const
    {
        return x;
    }
    float isY() const
    {
        return y;
    }
    void getdata()
    {
        cout << "Enter the coordinates" << endl;
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "The x coordinate is " << x << "and y coordinate is" << y << endl;
    }
    ClassA addition(ClassB &b);
};
class ClassB
{
private:
    int x, y;

public:
    float isX() const
    {
        return x;
    }
    float isY() const
    {
        return y;
    }
    void getdata()
    {
        cout << "Enter the coordinates" << endl;
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "The x coordinate is " << x << "and y coordinate is" << y << endl;
    }
    friend ClassA ClassA::addition(ClassB &b);
};
ClassA ClassA::addition(ClassB &b)
{

    float p = x + b.x;
    float q = y + b.y;
    return ClassA(p, q);
}
void Substraction(const ClassA &a, const ClassB &b)
{
    cout << "The substraction of x coorinate is :" << a.isX() - b.isX() << "and y coordinate is" << a.isY() - b.isY() << endl;
    ;
}
void Division(const ClassA &a, const ClassB &b)
{
    cout << "The division  of x coordinate is: " << a.isX() / b.isX() << " and y coordinate is : " << a.isY() / b.isY() << endl;
}
void Multiplication(const ClassA &a, const ClassB &b)
{
    cout << "The multiplication of x coordinate is:" << a.isX() * b.isY() << "and y coordinate is :" << a.isY() * b.isY() << endl;
}
int main()
{
    ClassA ca1, ca2;
    ClassB cb1;
    ca1.getdata();
    cb1.getdata();
    ca2 = ca1.addition(cb1);
    ca1.showdata();
    cb1.showdata();
    ca2.showdata();
    Substraction(ca1, cb1);
    Multiplication(ca1, cb1);
    Division(ca1, cb1);
    return 0;
}