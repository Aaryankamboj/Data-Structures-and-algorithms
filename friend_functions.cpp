#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non-member sumcomplex function is allowed to do anything with my private members
    friend Complex sumcomplex(Complex o1, Complex o2);
    void print(void)
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.print();

    c2.setnumber(5, 8);
    c2.print();
    sum = sumcomplex(c1, c2);
    sum.print();
}
/* Properties of Friend Functions 
1. Not in the scope of Class
2. Since it is not in the scope of class, it cannot be called with any class object. c1.sumcomplex() == invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be daclared inside public and private section of class.
6. It cannot access the members directly by their names and need obj_name.member_name to access any member
*/