/*Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void getdata()
    {
        cout << "Enter the name and age of the person:" << endl;
        cin >> name >> age;
    }
};

class Employee : virtual public Person
{
private:
    int empid;
    float salary;

public:
    void getdata()
    {
        cout << "Enter the employee id :" << endl;
        cin >> empid;
        cout << "Enter the salary of the employee:" << endl;
        cin >> salary;
    }
    void showdata()
    {
        cout << "The name age employee id and salary of the employee:" << endl;
        cout << name << "|" << age << "|" << empid << "|" << salary << endl;
    }
};
class Student : virtual public Person
{
private:
    int Id;
    string department;

public:
    void getdata()
    {
        cout << "Enter the depearment of the student:" << endl;
        cin >> department;
        cout << "Enter the id of the student: " << endl;
        cin >> Id;
    }
    void showdata()
    {
        cout << "The name age id and department of the student:" << endl;
        cout << name << "|" << age << "|" << Id << "|" << department << endl;
    }
};
class Manager : public Employee, public Student
{
private:
    string edu;

public:
    void getdata()
    {
        cout << "Enter the education of the perosn " << endl;
        cin >> edu;
    }
    void showdata()
    {
        cout << "The name age and education of the Manger is:" << endl;
        cout << name << "|" << age << "|" << edu << endl;
    }
};
int main()
{
    Employee e;
    Student s;
    Manager m;
    e.Person ::getdata();
    e.getdata();
    e.showdata();
    s.Person ::getdata();
    s.getdata();
    s.showdata();
    m.Person ::getdata();
    m.getdata();
    m.showdata();
    return 0;
}