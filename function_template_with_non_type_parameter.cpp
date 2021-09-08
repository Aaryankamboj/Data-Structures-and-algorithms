#include <iostream>
using namespace std;
template <class T>
void display(T a, T b, char oper)
{
    switch (oper)
    {
    case '+':
        cout << a << oper << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << oper << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << oper << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << oper << b << " = " << a / b << endl;
        break;

    }
}
    int main()
    {
        int a,b;
        char op;
        cin >>a >>b>>op;
        display(a,b,op);
    }