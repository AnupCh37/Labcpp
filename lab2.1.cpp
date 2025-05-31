/*WAP in cpp to set a structure to hold date (mm,dd andyy),assign
values to the members of the structure and print out the values
in the format 11/28/2004 by function .Pass the structure to the
function */
#include <iostream>
using namespace std;
struct Time
{
    int yrs;
    int mnth;
    int day;
};
void timePrint(struct Time p[], int n);
int main()
{
    Time t[100];
    int n;
    cout << "Enter the number of date:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the time (month/day/years) :" << endl;
        cin >> t[i].mnth >> t[i].day >> t[i].yrs;
    }
    timePrint(t, n);
    return 0;
}
void timePrint(struct Time p[], int n)
{
    cout << "The time in(month/day/years): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].mnth << "/" << p[i].day << "/" << p[i].yrs << endl;
    }
}