//DSbaral
/*WAP a function that passes two temperatures by reference and 
sets larger of the two numbers to a value entered by user by using return by reference */
#include <iostream>
using namespace std;
float& greaterTemp(float &t1, float &t2)
{

    return  t1 > t2 ? t1 : t2 ;
}
int main()
{
    float temp1, temp2;
    cout << "Enter the two temperature :";
    cin >> temp1 >> temp2;
    cout << "The greater temperature is :";
    cout<<greaterTemp(temp1,temp2);
    return 0;
}
