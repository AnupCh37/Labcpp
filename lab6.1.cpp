/*Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    float centimeter;

public:
    Distance() : meter(0), centimeter(0) {}
    Distance(float m, float cm) : meter(m), centimeter(cm) {}
    Distance(float m)
    {
        meter = int(m);
        centimeter = 100 * (m - meter);
    }
    void getdata()
    {
        cout << "Enter the distance in meter :" << endl;
        cin >> meter;
        cout << "Enter the distance in centimeter:" << endl;
        cin >> centimeter;
    }
    void showdata()
    {
        cout << "The distance in meter is" << meter << "and the distance in centimeter is" << centimeter << endl;
    }
    operator float()
    {
        float m = meter + 0.01 * centimeter;
        return m;
    }
};
int main()
{
    Distance d1, d2;
    float meter;
    cout << "Enter the distance in term of  meter  only " << endl;
    cin >> meter;
    d1 = meter;
    d1.showdata();
    d2.getdata();
    float m;
    m = d2;
    cout << "The distance in meter is " << endl;
    cout << m << endl;
    return 0;
}