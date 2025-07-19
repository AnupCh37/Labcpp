/*Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator function*/
#include <iostream>
using namespace std;
class Cartesain
{
private:
    float x;
    float y;
    float z;

public:
    Cartesain() : x(0.0), y(0.0), z(0.0) {}
    Cartesain(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {}
    void getdata()
    {
        cout << "Enter the three co-ordinate :" << endl;
        cin >> x >> y >> z;
    }
    void showdata()
    {
        cout << "The co-ordinate in space :" << endl;
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
    friend Cartesain operator+(Cartesain c1, Cartesain c2);
    friend Cartesain operator-(Cartesain c1, Cartesain c2);
};
Cartesain operator+(Cartesain a1, Cartesain a2)
{
    float x = a1.x + a2.x;
    float y = a1.y + a2.y;
    float z = a1.z + a2.z;
    return Cartesain(x, y, z);
}
Cartesain operator-(Cartesain s1, Cartesain s2)
{
    float x = s1.x - s2.x;
    float y = s1.y - s2.y;
    float z = s1.z - s2.z;
    return Cartesain(x, y, z);
}
int main()
{
    Cartesain c1(1, 2, 3), c2, c3, c4;
    c2.getdata();
    c3 = c1 + c2;
    c4 = c1 - c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    return 0;
}
