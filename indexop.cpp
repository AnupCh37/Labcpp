//DsBaral
//WAP in cpp to show to concept of overloading of [] Index operator 
#include <iostream>
#include <process.h>
using namespace std;
int MaxValue = 10;
class indexOp
{
    int arr[100];

public:
    int &operator[](int n)
    {
        if (n < 0 || n > MaxValue)
        {
            cout << "array out of index bound " << endl;
            exit(1);
        }
        return arr[n];
    }
};
int main()
{
    indexOp iOp;
    int n;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;
    int arr;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "element of the array:" << endl;
        cin >> arr;
        iOp[i] = arr;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = iOp[i];
        cout << "The Element " << i << "of the array is" << temp << endl;
    }
    return 0;
}
