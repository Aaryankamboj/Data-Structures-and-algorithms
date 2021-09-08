#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    friend complex sum1(complex, complex);
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getnumber()
    {
        cout << a << " + " << b << " i" << endl;
    }
};

complex sum1(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, res;
    c1.setnumber(2, 3);
    c2.setnumber(7, 6);
    // c1.getnumber();
    res = sum1(c1, c2);
    res.getnumber();
}