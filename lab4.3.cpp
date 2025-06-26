//Dsbaral
/* Write a class that can store Department ID and Department Name with constructors
to initialize its members. Write destructor member in the same class and display the 
message "Object n goes out of the scope". Your program should be made such that it 
should show the order of constructor and destructor invocation. */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int count = 1;
class Employee
{
private:
    string DepName;
    int DepID;

public:
    Employee() : DepName(" "), DepID(0) {};
    Employee(string name, int i) : DepName(name), DepID(i)
    {
        cout << "Initilizated object " << count++ << " using constructor " << endl;
    };
    ~Employee()
    {
        cout << "Object " << --count << " goes out of the scope " << endl;
    }
    void getdata()
    {
        cout << "Initilizated object " << count++ << "using member function" << endl;
        cout << "Enter the Department Name and Id " << endl;
        cin >> DepName >> DepID;
    }
    void showdata()
    {
        cout << "The department Name and ID of employee is: " << endl;
        cout << setw(10) << DepName << setw(5) << DepID << endl;
    }
};
int main()
{
    Employee e1("Anup", 100), e2;
    e2.getdata();
    e1.showdata();
    e2.showdata();
    return 0;
}
