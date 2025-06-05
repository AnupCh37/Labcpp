//Dsbaral
/*WAP in cpp to dislpay the current monthly salary of chief executive officer , information officer, and system  thanalyst, programmerat has been increased by 9,10,12 and 12 percentage respectively in year 2010. Let us assume that the salaries in year 2009 are
Cheif execuitve officer Rs.35000/m
Information officer Rs.25000/m
System analyst Rs.24000/m
Programmer Rs.18000/m
Make a function that takes two arguments; one salary and the other increment . Use proper default argument */
#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    float salary;
    float increment;
    string Position;

public:
    employee() : salary(0.0), increment(0.0) {}
    employee(float sal, float inc) : salary(sal), increment(inc) {}

    void getdata()
    {
        cin.ignore();
        cout << "Enter the type of employee: ";
        getline(cin, Position);

        cout << "Enter the salary of the employee in 2009: ";
        cin >> salary;

        cout << "Enter the increment rate of the employee: ";
        cin >> increment;
    }

    void showdata()
    {
        float newsalary = salary + salary * (increment / 100);
        cout << "\nThe position of the employee is: " << Position << endl;
        cout << "The salary of the employee in 2010 is: Rs." << newsalary << "/m" << endl;
    }
};

int main()
{
    employee emp[100];
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEntering data for employee " << i + 1 << ":" << endl;
        emp[i].getdata();
    }

    cout << " \nEmployee Details " << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].showdata();
    }

    return 0;
}
