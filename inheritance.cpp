#include <iostream>
using namespace std;
class base
{
protected:
    int a = 10;

public:
    void show()
    {
        cout << a << "\nI am a base class\n";
    }
    // void a1()
    // {
    //     cout << a;
    // }
};
class Derived : public base
{
public:
    void display()
    {
        cout << "I am a derived class\n";
    }
    void ashow()
    {
        cout << a;
    }
};

class Derived2 : public Derived
{
protected:
    int a = 784;
    void ashow()
    {
        cout << a;
    }

public:
    void display2()
    {
        cout << a << "\nI am derived 2 class\n ";
    }
};

int main()

{
    // Derived obj;
    // obj.display();
    // obj.show();
    // base obj;
    // obj.a1();
    // Derived d;
    // d.a1();
    // Derived2 obj;
    // obj.display2();
    // obj.display();
    // obj.show();
    // obj.ashow();
    Derived obj;
    obj.ashow();
}