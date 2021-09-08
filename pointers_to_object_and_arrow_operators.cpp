#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void getdata()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imag << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imag = b;
    }
};
int main()
{
    // 1. Ist method to create an object
    complex c1;
    c1.setdata(3, 4);
    c1.getdata();
    // 2. 2nd method to create an object
    // Pointer ptr points to c1 object
    // complex *ptr = &c1;
    // (*ptr).setdata(4, 3);
    // (*ptr).getdata();
    // 3. 3rd method to create an object
    complex *ptr = new complex;
    (*ptr).setdata(4, 5);
    // (*ptr).getdata(); is exactly same as  
       ptr->getdata();

    //    Array of objects
    complex *ptr1=new complex[3];
    ptr1->setdata(1,2);
    ptr1->getdata();


}