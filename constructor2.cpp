#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // Constructor declaration
    void print()
    {
        cout << a << " + " << b << " i" << endl;
    }
};
complex::complex(int x, int y) // ---> This is a parametrized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}
int main()
{
    // There are 2 types to pass values to parameterized constuctor
    // 1. Emplicit call

    complex a(4,3);
    a.print();

    //2. Explicit Call
    complex b = complex(7, 8);
    b.print();
}