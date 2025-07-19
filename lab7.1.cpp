/*Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.*/
#include <iostream>
using namespace std;
class Shape
{
protected:
    float area;
    const float PI = 3.1415;

public:
    Shape() {}
    virtual ~Shape()
    {
        cout << "Deleting base class destructor" << endl;
    }
    virtual void calcArea() = 0;
    virtual void displayArea() = 0;
};
class Circle : public Shape
{
private:
    float radius;

public:
    Circle() : radius(5.0f) {}
    ~Circle()
    {
        cout << "Inside Circle class Destructor " << endl;
    }
    void calcArea()
    {
        area = PI * radius * radius;
    }
    void displayArea()
    {
        cout << "The shape is area" << endl;
        cout << "The area is" << endl;
        cout << area << endl;
    }
};
class Triangle : public Shape
{
private:
    float height;
    float breadth;

public:
    Triangle() : height(5.0f), breadth(7.0f) {}
    ~Triangle()
    {
        cout << "Inside Triangle class Destructor " << endl;
    }
    void calcArea()
    {
        area = 0.5 * height * breadth;
    }
    void displayArea()
    {
        cout << "The shape is triangle:" << endl;
        cout << "The area is :" << endl;
        cout << area << endl;
    }
};
class Trapazoid : public Shape
{

private:
    float base1, base2;
    float height;

public:
    Trapazoid() : height(7.0f), base1(5.0f), base2(5.0f) {}
    ~Trapazoid()
    {
        cout << "Inside Trapazoid class Destructor " << endl;
    }
    void calcArea()
    {
        area = 0.5 * height * (base1 + base2);
    }
    void displayArea()
    {
        cout << "The shape is Trapazoid:" << endl;
        cout << "The area is :" << endl;
        cout << area << endl;
    }
};
int main()
{
    Shape *shape[3];
    shape[0] = new Circle;
    shape[1] = new Triangle;
    shape[2] = new Trapazoid;
    for (int i = 0; i < 3; i++)
        shape[i]->calcArea();
    for (int i = 0; i < 3; i++)
        shape[i]->displayArea();
    for (int i = 0; i < 3; i++)
        delete shape[i];
    return 0;
}