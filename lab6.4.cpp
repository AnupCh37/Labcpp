/*Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age) and with added unique features of student, and employee, and functionality to set properties of student and employee objects. And make one member function for printing the address of the objects of classes (base and derived) using this pointer. Create two objects of the base class and the derived classes each and print the addresses of individual objects. Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person() : name(" "), age(0) {}
    Person(string n, int r) : name(n), age(r) {}
    void getdata()
    {
        cout << "Enter the name :" << endl;
        cin >> name;
        cout << "Enter the  age :" << endl;
        cin >> age;
    }
    void showaddress()
    {
        cout << "The address of the Person object is" << endl;
        cout << this << endl;
    }
};
class Student : public Person
{
private:
    int rollno;
    string faculty;

public:
    Student() : rollno(0), faculty(" ") {}
    Student(int rno, string fac) : rollno(rno), faculty(fac) {}
    void getdata()
    {
        cout << "Enter the roll no :" << endl;
        cin >> rollno;
        cout << "Enter the faculty of the student:" << endl;
        cin >> faculty;
    }
    void showdata()
    {
        cout << "The name age faculty and roll no of the student:" << endl;
        cout << name << "|" << age << "|" << rollno << "|" << faculty << endl;
    }
    void showaddress()
    {
        cout << "The address of the student   object is" << endl;
        cout << this << endl;
    }
};
class Manager : public Person
{
private:
    int salary;

public:
    Manager() : salary(0.0) {}
    Manager(int sal) : salary(sal) {}
    void getdata()
    {
        cout << "Enter the salary of the manger:" << endl;
        cin >> salary;
    }
    void showdata()
    {
        cout << "The name age and salary of the Manager:" << endl;
        cout << name << "|" << age << "|" << salary << endl;
    }
    void showaddress()
    {
        cout << "The address of the Manger object is" << endl;
        cout << this << endl;
    }
};
class Employee : public Person
{
private:
    int empid;
    int salary;

public:
    Employee() : empid(0), salary(0) {}
    Employee(int ei, int s) : empid(ei), salary(s) {}
    void getdata()
    {
        cout << "Enter the employee id and salary:" << endl;
        cin >> empid >> salary;
    }
    void showdata()
    {
        cout << "The name age salary and roll id of the employee :" << endl;
        cout << name << "|" << age << "|" << salary << "|" << empid << endl;
    }
    void showaddress()
    {
        cout << "The address of the Employee  object is" << endl;
        cout << this << endl;
    }
};

int main()
{
    Person p1, p2;
    Student s1, s2;
    Manager m1, m2;
    Employee e1, e2;
    e1.Person::getdata();
    e1.getdata();
    e1.showdata();
    s1.Person::getdata();
    s1.getdata();
    s1.showdata();
    m1.Person::getdata();
    m1.getdata();
    m1.showdata();
    cout << "The address space ocupied by Person object is:" << endl;
    p1.showaddress();
    p2.showaddress();
    cout << "The address space ocupied by Student objects is :" << endl;
    s1.showaddress();
    s2.showaddress();
    cout << "The address space ocupied by Manager objects is :" << endl;
    m1.showaddress();
    m2.showaddress();
    cout << "The address space ocupied by Employee objects is :" << endl;
    e1.showaddress();
    e2.showaddress();
    return 0;
}