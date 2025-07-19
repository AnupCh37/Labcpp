/*Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

-  veena, guitar, sitar, sarod and mandolin under string()

-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()

-  tabla, mridangam, bangos, drums and tambour under perc()

It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

Type of instruments to be displayed

a.  String instruments

b.  Wind instruments

c.  Percussion instruments

The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.*/
#include <iostream>
#include <string>
using namespace std;
class Musicians
{
protected:
    string stringInstrument[5] = {"veena", "guitar", "sitar", "sarod", "mandolin"};
    string windInstrument[5] = {"flute", "clarinet saxophone", "nadhaswaram", "piccolo"};
    string percussionInstrumet[5] = {"table", "mridangam", "bangos", "drums", "tambour"};
    void String()
    {
        cout << "The string Instruments are:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << stringInstrument[i] << endl;
        }
    }
    void wind()
    {
        cout << "The wind Instrument are:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << windInstrument[i] << endl;
        }
    }
    void perc()
    {
        cout << "The Percussion Instrument are:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << percussionInstrumet[i] << endl;
        }
    }
};
class TypeIns : public Musicians
{
private:
    char choice;

public:
    void getchoice()
    {
        cout << "Enter the choice" << endl;
        cout << "s for String Instrument :" << endl;
        cout << "w for Wind Instrument :" << endl;
        cout << "P for Percussion Instrument:" << endl;
        cin >> choice;
    }
    void showchoice()
    {
        switch (choice)
        {
        case 's':
        case 'S':
            String();
            break;

        case 'w':
        case 'W':
            wind();
            break;

        case 'p':
        case 'P':
            perc();
            break;

        default:
            cout << "Invalid data type" << endl;
            break;
        }
    }
};
int main()
{
    TypeIns t;
    t.getchoice();
    t.showchoice();
    return 0;
}