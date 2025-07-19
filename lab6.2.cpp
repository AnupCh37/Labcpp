/*Write two classes to store distances in meter-centimeter and feet-inch systems respectively. Write conversions functions so that the program can convert objects of both types.*/
#include <iostream>
using namespace std;
class mcDistance
{
private:
    int meter;
    float centimeter;

public:
    mcDistance() : meter(0), centimeter(0) {}
    mcDistance(int m, float cm) : meter(m), centimeter(cm) {}
    void getdata()
    {
        cout << "Enter the distance in meter :" << endl;
        cin >> meter;
        cout << "Enter the distance in centimeter:" << endl;
        cin >> centimeter;
    }
    void showdata()
    {
        cout << "The distance is meter and centimeter";
        cout << meter << "m " << centimeter << "cm" << endl;
    }
    int retM()
    {
        return meter;
    }
    float retCM()
    {
        return centimeter;
    }
};
class fiDistance
{
private:
    int feet;
    float inches;

public:
    fiDistance() : feet(0), inches(0) {}
    fiDistance(mcDistance m)
    {
        float feetf = 3.2808 * (m.retM() + (m.retCM() / 100.0));
        feet = int(feetf);
        inches = 12 * (feetf - feet);
    }
    void getdata()
    {
        cout << "Enter the distance in feet :" << endl;
        cin >> feet;
        cout << "Enter the distance in inches:" << endl;
        cin >> inches;
    }
    void showdata()
    {
        cout << "The distance is feet and inches:";
        cout << feet << "' " << inches << " '' " << endl;
    }
    operator mcDistance()
    {
        float m, cm, fm;
        fm = feet * 0.3048 + inches * 0.0254;
        m = int(fm);
        cm = 100 * (fm - m);
        return mcDistance(m, cm);
    }
};
int main()
{
    mcDistance m1, m2;
    fiDistance f1, f2;
    m1.getdata();
    f1 = m1;
    f1.showdata();
    f2.getdata();
    m2 = f2;
    m2.showdata();
    return 0;
}