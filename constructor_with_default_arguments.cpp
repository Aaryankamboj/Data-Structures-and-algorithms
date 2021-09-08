#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
  

    complex(int a, int b = 9)
    {
        real = a;
        imag = b;
    }
    complex(int a, int b, int c=5)
    {
        real = a;
        imag = b;
        
    }
    void display()
    {
        cout << "My complex Number is : " << real << " + " << imag << " i " << endl;
    }
};
int main()
{
    complex c1(2);
    c1.display();
}