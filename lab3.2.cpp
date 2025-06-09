//DSbaral
/* Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept */
#include <iostream>
using namespace std;
class Check
{
private:
    int num;

public:
    void getdata()
    {
        cout << "Enter the number:";
        cin >> num;
    }
    void checkprime()
    {
        int isPrime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 0)
        {
            cout << "The number isn't a prime number:" << endl;
        }
        else if (isPrime == 1)
        {
            cout << "The number is a prime number:" << endl;
        }
    }
};
int main()
{
    Check c;
    char choice;
    c.getdata();
    c.checkprime();
    do
    {
        cout << "Do you want to continue (y/n)?";
        cin >> choice;
        if (choice == 'n')
        {
            break;
        }
        c.getdata();
        c.checkprime();
    } while (choice == 'y');

    return 0;
}
