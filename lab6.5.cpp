/*Write a base class that asks the user to enter a complex number, and make a derived class that adds the complex number of its own to the base. Finally, make a third class that is a friend of derived and calculate the difference between the base complex number and its own complex number.*/
#include <iostream>
using namespace std;
class Derv2;
class Base
{
public:
    float real;
    float imag;

public:
    Base() : real(0.0), imag(0.0) {}
    Base(float r, float i) : real(r), imag(i) {}
    void getdata()
    {
        cout << "Enter the complex number :" << endl;
        cin >> real >> imag;
    }
    void showdata()
    {
        cout << "The complex number is :" << endl;
        cout << real << "+i" << imag << endl;
    }
};
class Derv1 : public Base
{
private:
    float real1;
    float imag1;

public:
    Derv1() : real1(0.0), imag1(0.0) {}
    Derv1(float r, float i) : real1(r), imag1(i) {}
    void getdata()
    {
        cout << "Enter the complex number:" << endl;
        cin >> real1 >> imag1;
    }
    void showdata()
    {
        cout << "The complex number is :" << endl;
        cout << real1 << "+i" << imag1 << endl;
    }
    void addition()
    {
        cout << "The sum of complex numbers is:" << endl;
        cout << real + real1 << "+i" << imag + imag1 << endl;
    }
    friend class Derv2;
};
class Derv2
{
private:
    float real2;
    float imag2;

public:
    Derv2() : real2(0.0), imag2(0.0) {}
    Derv2(float r, float i) : real2(r), imag2(i) {}
    void getdata()
    {
        cout << "Enter the complex number:" << endl;
        cin >> real2 >> imag2;
    }
    void showdata()
    {
        cout << "The complex number is :" << endl;
        cout << real2 << "+i" << imag2 << endl;
    }
    void subtraction(const Derv1 &d)
    {
        cout << "The Difference of complex numbers is:" << endl;
        cout << d.real - real2 << "+i" << d.imag - imag2 << endl;
    }
};
int main()
{
    Derv1 d1;
    Derv2 d2;
    d1.Base::getdata();
    d1.getdata();
    d1.Base::showdata();
    d1.showdata();
    d1.addition();
    d2.getdata();
    d2.showdata();
    d2.subtraction(d1);
    return 0;
}