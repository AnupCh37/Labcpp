/*Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student*/
#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
protected:
    string name;
    string field;
    int noOfsem;

public:
    virtual void getdata() = 0;
    virtual void showdata() = 0;
};
class Enginerring : public Student
{
private:
    string efield;

public:
    void getdata()
    {
        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter your field :" << endl;
        cin >> field;
        cout << "Enter the number of semester:" << endl;
        cin >> noOfsem;
        cout << "Enter the field within engineering :" << endl;
        cin >> efield;
    }
    void showdata()
    {
        cout << "The details of the student is:" << endl;
        cout << name << setw(10) << field << setw(5) << noOfsem << setw(10) << efield;
    }
};
class Medicine : public Student
{
private:
    string mfield;

public:
    void getdata()
    {
        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter your field :" << endl;
        cin >> field;
        cout << "Enter the number of semester:" << endl;
        cin >> noOfsem;
        cout << "Enter the field within Medicine :" << endl;
        cin >> mfield;
    }
    void showdata()
    {
        cout << "The details of the student is:" << endl;
        cout << name << setw(10) << field << setw(5) << noOfsem << setw(10) << mfield;
    }
};
class Science : public Student
{
private:
    string sfield;

public:
    void getdata()
    {
        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter your field :" << endl;
        cin >> field;
        cout << "Enter the number of semester:" << endl;
        cin >> noOfsem;
        cout << "Enter the field within science:" << endl;
        cin >> sfield;
    }
    void showdata()
    {
        cout << "The details of the student is:" << endl;
        cout << name << setw(10) << field << setw(5) << noOfsem << setw(10) << sfield << endl;
    }
};
int main()
{
    Enginerring e;
    Medicine m;
    Science s;
    Student *s1 = &e;
    Student *s2 = &m;
    Student *s3 = &s;
    s1->getdata();
    s2->getdata();
    s3->getdata();
    s1->showdata();
    s2->showdata();
    s3->showdata();

    return 0;
}