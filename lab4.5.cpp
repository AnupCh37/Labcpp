/*Write a program that illustrates the following relationship and comment on them.

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function */
#include <iostream>
using namespace std;
class ShowObject
{
public:
    void ConstFunc() const
    {
        cout << "The function is const function" << endl;
    };
    void nonConstFunc()
    {
        cout << "The function is non-constant fuction" << endl;
    }
};
int main()
{
    ShowObject o1;
    const ShowObject o2;
    o1.ConstFunc();
    o1.nonConstFunc();
    o2.ConstFunc();
    // o2.nonConstFunc(); non-constant function can change the constant object
    return 0;
}