#include <iostream>
using namespace std;
class FunctionCall
{
private:
    int num;

public:
    void operator()(int num)
    {
        cout << "The function is called with number " << num << "as argument " << endl;
    }
};
int main()
{
    FunctionCall f;
    f(100);
  
    return 0;
}