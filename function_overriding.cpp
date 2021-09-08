#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "This is the base class print function\n";
    }
    void display()
    {
        cout << "This is base display function";
    }
};

class derived : public Base
{
    public:
    void print()
    {
        cout << "This is the derived class print function";
    }
    void display()
    {
        cout << "This is derived class display function";
    }
};
int main()
{
    Base*baseptr;
    derived d;
    baseptr= &d;
    baseptr ->print();
    baseptr ->display();
}