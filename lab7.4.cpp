/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. Illustrate RTTI by the use of dynamic_cast and typeid operators in this program*/
#include <iostream>
using namespace std;
class Vehical
{
protected:
    string name;
    int cc;

public:
    virtual void getdata() {}
    virtual void showdata() {}
};
class Bus
{

private:
};
int main()
{

    return 0;
}