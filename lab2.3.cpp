/*WAP in to Define two namespaces: Square and Cube . In both the namespaces, define an integer variable named "fun". The "fun" function in "Square" namespace, should return the square of an integer  passed as an argument while the "fun" function in "Cube"namespace ,should return the cube of an integer passed as the argument. In the main function ,set the integer varialbe "num" of the both the namespace with different values.Then, compute and print the cube of the integer variable"num" of the "Square namespace using the "fun" function of the "cube"namespace and the square of the integer vaiable "num" of the "Cube" namespace
using the "fun" function of the "Square" namespace*/
#include <iostream>
using namespace std;
namespace Square
{
    int num;
    int Square(int n = num)
    {
        return n * n;
    }
}
namespace Cube
{
    int num;
    int Cube(int n = num)
    {
        return n * n * n;
    }

}
int main()
{
    Square::num = 5;
    Cube::num = 8;
    cout << "Square of the " << Square::num << "is " << Square::Square() << endl;
    cout << "cube of the " << Cube::num << "is " << Cube::Cube() << endl;
    cout << "Square of the " << Cube::num << "is " << Square::Square(Cube::num) << endl;
    cout << "Cube of the " << Square::num << "is " << Cube::Cube(Square::num) << endl;
    return 0;
}