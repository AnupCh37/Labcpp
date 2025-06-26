//Dsbaral
/*Assume that one constructor initializes data member say num_vehicle, hour, and rate.
There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. 
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor). */
#include <iostream>
using namespace std;
class TollBoth
{
private:
    static int countVehical;
    int num_vehical;
    int hrs;
    float rate;

public:
    TollBoth() : num_vehical(0.0), hrs(0.0), rate(0.0) { countVehical++; };
    TollBoth(int vnum, int h, float r) : num_vehical(vnum), hrs(h), rate(r) { countVehical++; };
    void getdata()
    {
        countVehical++;
        cout << "Enter vehical number hours parked rate of parked vechical :" << endl;
        cin >> num_vehical >> hrs >> rate;
    }
    void showdata()
    {
        float total_charge = hrs * rate;
        if (countVehical > 10)
        {
            total_charge -= 0.1 * total_charge;
        }
        cout << "The total charge of the vehical " << num_vehical << " is " << total_charge << endl;
    }
    static void vechicalCount()
    {
        cout << "The total number of vehical is " << countVehical;
    }
    TollBoth(TollBoth &t)
    {
        num_vehical = t.num_vehical;
        hrs = t.hrs;
        rate = t.rate;
    }
};
int TollBoth::countVehical = 0;
int main()
{
    TollBoth t1(100, 3, 300), t2(110, 2, 200), t3, t4(t2);
    t3.getdata();
    t1.showdata();
    t2.showdata();
    t3.showdata();
    t4.showdata();
    TollBoth::vechicalCount();
    return 0;
}
