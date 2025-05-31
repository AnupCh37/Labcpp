//DSbaral
/*WAP in cpp using the function overloading that converts feet to inches. Use function with no argument ,one argument and two argument 
.Decide yourself the type of arguments. Use pass by reference in any of the function above1*/
#include <iostream>
void convertdist();
void convertdist(float n);
void convertdist(float &ft, float &in);
using namespace std;
int main()
{
    convertdist();
    float ft, in;
    cout << "Enter the distance in feet:";
    cin >> ft;
    cout << "Enter distance in inches:";
    cin >> in;
    convertdist(ft, in);
    cout << "The equivalnet distance in feet:" << in << endl;
    cout << "The equivalent distance in inches:" << ft << endl;
    convertdist(12);
    return 0;
}
void convertdist()
{
    float ft, in;
    cout << "Inside function with no argument:" << endl;
    cout << "Enter ft" << endl;
    cin >> ft;
    cout << "Enter inches" << endl;
    cin >> in;
    cout << "The equivelent inches is: " << ft * 12.0 << endl;
    cout << "The equivalent feet is:" << in / 12.0 << endl;
}
void convertdist(float &ft, float &in)
{
    ft *= 12;
    in /= 12;
}
void convertdist(float n)
{
    char choice;
    cout << "Is" << n << " in feet or inches (f/i)?";
    cin >> choice;
    if (choice == 'f')
    {
        cout << "The distance in inches is:" << n * 12;
    }
    else if (choice == 'i')
    {
        cout << "The distance in feet is:" << n / 12;
    }
    else
    {
        cout << "In valid data type" << endl;
    }
}
