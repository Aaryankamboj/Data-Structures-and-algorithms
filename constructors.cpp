#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as a class used to initialize the objects of
    // class. It is automatically invoked whenever the object is created.
    complex(void); // Constructor declaration
    void print()
    {
        cout << a << " + " << b << " i" << endl;
    }
};
complex::complex(void) // ---> This is a default constructor
{
    a = 30;
    b = 0;
    // cout<<"Hello world";
}
int main()
{
    complex c, c1, c2;
    c.print();
    c1.print();
    c2.print();

    return 0;

/*
Characteristics of function
1. It should be declared in the public section of class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address
*/
}