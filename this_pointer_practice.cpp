#include <iostream>
using namespace std;
class Base
{

public:
    int a;
    Base()
    {
        a = 0;
    }
    void setvalue(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    Base b;
    b.setvalue(4);
    b.display();
    cout << b.a;
}