/*Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus and
had worked ... ... ... hours as overtime in the year ... ... ...*/
#include <iostream>
using namespace std;
float rate = 10;
class Employee
{
private:
    int empId;
    float totalBonus;
    float overHrs;
    int yrs;

public:
    void setpara()
    {
        cout << "Enter the employee id:" << endl;
        cin >> empId;
        cout << "Enter the overtime hours of employee:" << endl;
        cin >> overHrs;
        cout << "Enter the year of the work:" << endl;
        cin >> yrs;
    }
    void displayreport()
    {
        cout << "An employee with  id " << empId << " has received Rs " << overHrs * rate << " as a bonus and had worked " << overHrs << "hours as overtime in the year " << yrs << endl;
    }
};
int main()
{
    Employee e[100];
    int n;
    cout << "Enter the number of the employee:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        e[i].setpara();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].displayreport();
    }
    return 0;
}