#include <iostream>
using namespace std;
// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(Complex, Complex );    
    int sumimagcomplex(Complex, Complex );    
};


class Complex
{
    int a, b;
    // Individually declarind functions as friend
    friend int Calculator::sumrealcomplex(Complex o1, Complex o2);
    friend int Calculator::sumimagcomplex(Complex o1, Complex o2);
    
    // Alternate : Declaring the entire class as Friend
    friend class Calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print(void)
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
int Calculator ::  sumrealcomplex(Complex o1, Complex o2)
    {
        return o1.a + o2.a;
    }
int Calculator ::  sumimagcomplex(Complex o1, Complex o2)
    {
        return o1.b + o2.b;
    }
int main()
{
    Complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(5,6);
    Calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<<" The sum of real part of o1 and o2 is : "<<res<<endl;
    int res2=calc.sumimagcomplex(o1,o2);
    cout<<" The sum of imaginary part of o1 and o2 is : "<<res2;
    

    return 0;
}