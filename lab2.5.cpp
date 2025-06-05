/*WAP in cpp to Assume the employee will have to pay 10  percent income tax to the government . Ask user to enter the employee Salary. Use inline function to display the net payment to the employee by they company */
#include <iostream>
using namespace std;
inline float incomeTax(float in)
{
    return 0.1 * in;
}
int main()
{
    float salary;
    cout << "Enter the salary of the employee:";
    cin >> salary;
    cout << "Your income tax is :";
    cout << incomeTax(salary);
    return 0;
}