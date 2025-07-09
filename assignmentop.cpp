//DsBaral
// WAP in cpp to show the concept of overloading assignment operator 
#include <iostream>
using namespace std;
class Data
{
private:
    int num;

public:
    void getdata()
    {
        cout << "Enter the number ";
        cin >> num;
    }
    void showdata()
    {
        cout << "The number is " << num << endl;
    }
    void operator=(Data &d)
    {

        num = d.num;
    }
};
int main()
{
    Data d1, d2;
    d1.getdata();
    d1.showdata();
    d2 = d1;
    d2.showdata();
    return 0;
}
