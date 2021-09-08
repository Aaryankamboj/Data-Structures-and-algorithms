#include <iostream>
using namespace std;
class Base
{
    int data1; // private by default and not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

class Derive : private Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derive ::process(void)
{
    setdata();
    data3 = data2 * getdata1();
}
void Derive ::display()
{
    cout << "Value of data 1 is " << getdata1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derive der;
    // der.setdata();
    der.process();
    der.display();
}