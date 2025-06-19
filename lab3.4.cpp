//DSbaral
/*Write a program with classes to represent a circle, rectangle, and triangle. Each class should have 
data members to represent the actual objects and member functions to read and display objects,
find perimeter and area of the objects, and other useful functions. Use the classes to create 
objects in your program*/
#include <iostream>
#define PI 3.1414
using namespace std;
class Circle
{
private:
    float radius;

public:
    Circle() : radius(0.0f) {}
    Circle(float r) : radius(r) {}
    void getdata()
    {
        cout << "Enter the radius of the circle:" << endl;
        cin >> radius;
    }
    void showdata()
    {
        cout << "The perimeter of the circle is:" << 2.0f * PI * radius << endl;
        cout << "The area of the circle is:" << PI * radius * radius << endl;
    }
};
class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle() : length(0.0f), width(0.0f) {}
    Rectangle(float l, float w) : length(l), width(w) {}
    void getdata()
    {
        cout << "Enter the lenght  and widht of rectangle:" << endl;
        cin >> length >> width;
    }
    void showdata()
    {
        cout << "The perimeter of the rectangle :" << 2.0f * (length + width) << endl;
        cout << "The area of the rectangle: " << length * width << endl;
    }
};
class Triangle
{
private:
    float a, b, c;
    float tbase, theight;

public:
    Triangle() : a(0.0f), b(0.0f), c(0.0f), tbase(0.0f), theight(0.0f) {}
    Triangle(float a, float b, float c, float tb, float th) : a(a), b(b), c(c), tbase(tb), theight(th) {}
    void getdata()
    {
        cout << "Enter the three sides  of trianlge :" << endl;
        cin >> a >> b >> c;
        cout << "Enter base and height of triangle :" << endl;
        cin >> tbase >> theight;
    }
    void showdata()
    {
        cout << "The peimeter of the triangle is :" << a + b + c << endl;
        cout << "The area of triangle is :" << 0.5f * tbase * theight << endl;
    }
};
int main()
{
    class Circle c1(5), c2;
    c2.getdata();
    c1.showdata();
    c2.showdata();
    Rectangle r1(10, 5), r2;
    r2.getdata();
    r1.showdata();
    r2.showdata();
    Triangle t1(2, 3, 4, 5, 6), t2;
    t2.getdata();
    t1.showdata();
    t2.showdata();
    return 0;
}
