#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    // when no copy constructor is found, compilersupplies its own copy constructor
    Number(Number &obj)
     {
         cout<<"Copy constructor called";
         a = obj.a;
     }
    Number(int num)
    {
        a = num;
    }
    void display()
    {
        cout << "the number for this object is : " << a << endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y
    Number z1(z); // Copy constructor invoked
    z1.display();
    Number z2;
    z2 = z;  // Copy constructor not invoked
    z2.display();
    Number z3 =z; //Copy constructor invoked
    z3.display();

}