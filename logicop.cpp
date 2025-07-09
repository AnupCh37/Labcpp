#include <iostream>
using namespace std;
class Logic
{
private:
    int num;

public:
    void getdata()
    {
        cout << "Enter the number:" << endl;
        cin >> num;
    }
    bool operator<(Logic &l)
    {
        if (num < l.num)
            return true;
        else
            return false;
    }

    bool operator>(Logic &l)
    {
        if (num > l.num)
            return true;
        else
            return false;
    }

    bool operator==(Logic &l)
    {
        if (num == l.num)
            return true;
        else
            return false;
    }
};
int main()
{
    Logic l1, l2;
    l1.getdata();
    l2.getdata();
    if (l1 > l2)
        cout << "The object 1 is greater then object 2";
    if (l1 < l2)
        cout << "The object 1 is lesser then object 2";
    if (l1 == l2)
        cout << "The object 1 is equal to object 2";
    return 0;
}