/*Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings */
#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
    char *str;

public:
    String(const char *sdata)
    {
        int len = strlen(sdata);
        str = new char[len + 1];
        strcpy(str, sdata);
    }

    ~String()
    {
        delete[] str;
    }
    void showdata()
    {
        cout << "The string is:" << endl;
        cout << str << endl;
    }
    String concatenateString(String &t1, String &t2)
    {
        int len1 = strlen(t1.str);
        int len2 = strlen(t2.str);
        char *temp = new char[len1 + len2 + 1];
        strcpy(temp, t1.str);
        strcat(temp, t2.str);
        String result(temp);
        delete[] temp;
        return result;
    }
};

int main()
{

    String s1("Engineer are ");
    String s2("Creature of logic");
    String s3("");
    s3 = s3.concatenateString(s1, s2);
    s1.showdata();
    s2.showdata();
    cout << "The concatenated String is" << endl;
    s3.showdata();
    return 0;
}