//DSbaral
/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.*/
#include <iostream>
using namespace std;
class Fahrenheit;
class Celsius
{
private:
    float temp;

public:
    void getdata()
    {
        cout << "Enter the temperature in celsius :" << endl;
        cin >> temp;
    }
    float toFahrenheit()
    {
        return (temp * (9.0f / 5.0f) + 32.0f);
    }
};
class Fahrenheit
{
private:
    float temp;

public:
    void getdata()
    {
        cout << "Enter the temperature in Fahrenheit :" << endl;
        cin >> temp;
    }
    float toCelsius()
    {
        return (temp - 32) * (5.0 / 9.0);
    }
};
int main()
{
    Celsius c;
    Fahrenheit f;
    c.getdata();
    cout << "The temperature in Fahrenheit is:" << c.toFahrenheit() << endl;
    f.getdata();
    cout << "The temperature in Celsius is:" << f.toCelsius() << endl;
    return 0;
}
