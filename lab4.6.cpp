/* Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function. */
#include <iostream>
using namespace std;
int SerialNum = 0;
class MakeObject
{
private:
    static int objCount;

public:
    MakeObject()
    {
        objCount++;
    }

    static void showcount()
    {
        SerialNum++;
        cout << "The serialNum of this object is " << SerialNum << endl;
        cout << "Total object count is :" << objCount << endl;
    }
};
int MakeObject::objCount = 0;
int main()
{
    MakeObject m1, m2, m3;
    m1.showcount();
    m2.showcount();
    m3.showcount();
    return 0;
}