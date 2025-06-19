//DSBaral
/*Create a class called carpark that has int data member for car id,
int data member for charge/hour, and float data member for the parked time.
Make functions to set data members and show the charges and parked hours of the 
corresponding car id. Make functions for setting and showing the data members.
Member function should be called from other functions. */
#include <iostream>
#include <iomanip>
using namespace std;
class CarPark
{
    int carId;
    int chargePerhrs = 100;
    float parkedTime;

public:
    CarPark() : carId(0), chargePerhrs(0), parkedTime(0.0f) {}
    CarPark(int id, int cph, float ptime) : carId(id), chargePerhrs(cph), parkedTime(ptime) {}
    void getdata()
    {
        cout << "Enter CarId:" << endl;
        cin >> carId;
        cout << "Enter charge Per hours:" << endl;
        cin >> chargePerhrs;
        cout << "Enter parked time in hours  :" << endl;
        cin >> parkedTime;
    }
    void showdata()
    {
        getdata();
        cout << "The carId , Parked Hours and Total charges is :" << endl;
        cout << setw(5) << carId << setw(5) << parkedTime << setw(5) << parkedTime * chargePerhrs << endl;
    }
};
int main()
{
    CarPark c[100];
    int n;
    cout << "Enter the number of car's" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        c[i].showdata();
    }

    return 0;
}
