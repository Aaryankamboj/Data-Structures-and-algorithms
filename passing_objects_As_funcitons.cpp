#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDatabysum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "Your complex number is " << a << "+ " << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.print();

    c2.setData(3, 4);
    c2.print();

    c3.setDatabysum(c1 , c2);
    c3.print();
}