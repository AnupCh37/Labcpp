//Dsbaral
//WAP in cpp to show the overloading of bitwise operator 
#include <iostream>
using namespace std;
class Bitwise
{
private:
    int num;

public:
    void getdata()
    {
        cout << "Enter the number:" << endl;
        cin >> num;
    }
    void showdata()
    {
        cout << "The number is :" << num << endl;
    }
    Bitwise operator&(Bitwise &b)
    {
        Bitwise temp;
        temp.num = num & b.num;
        return temp;
    }

    Bitwise operator|(Bitwise &b)
    {
        Bitwise temp;
        temp.num = num | b.num;
        return temp;
    }

    Bitwise operator^(Bitwise &b)
    {
        Bitwise temp;
        temp.num = num ^ b.num;
        return temp;
    }

    Bitwise operator~()
    {
        Bitwise temp;
        temp.num = ~num;
        return temp;
    }
};
int main()
{
    Bitwise b1, b2, b3;
    b1.getdata();
    b1.showdata();
    b2.getdata();
    b2.showdata();
    b3 = b1 & b2;
    b3.showdata();
    b3 = b1 | b2;
    b3.showdata();
    b3 = b1 ^ b2;
    b3.showdata();
    b3 = ~b1;
    b3.showdata();

    return 0;
}
