#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void funcA()
    {
        cout<<a << "Func A\n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Func B\n";
    }

protected:
    int c;
    void funC()
    {
        cout << "Func C\n";
    }
};

int main()
{
    A obj;
    obj.a=2;
    obj.funcA();

    // obj.funcB();
    // obj.funC();
}