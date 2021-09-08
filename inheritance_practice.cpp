#include <iostream>
using namespace std;
class Base
{
public:
    int data1;
    int data2;
    void setdata();
    int getdata1();

    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1()
{
    cout << data1;
    return 0;
}
int Base::getdata2()
{
    return data2;
}
class derive : public Base
{
    int data3;

public:
    void setdata()
    {
        data3 = data2 + data1;
    }
    void display()
    {
        cout << "The value of Data 3 is : " << data3 << endl;
    }
};
int main()
{

    derive d1;
    d1.setdata(10,20);
    d1.display();
}