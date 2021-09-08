#include <iostream>
using namespace std;
/*
case 1:
class B : Public A{
    order of execution of constructors
    A ka constructor pehle execute hoga
} ;

Case 2: 
Class A: public B, public c{
    order of execution of constructors
    Pehle B ka constructor execute hoga, then C ka then A ka
};

Case 3:
class A: public B, virtual public C{
    order of execution of constructors
    Pehle C ka then B, then A
};

*/
class Base
{
    int data1;

public:
    Base(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdatabase1()
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i){
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdatabase2(){
        cout << "The value of data2 is : " << data2 << endl;
    }
};
class Derived:public Base, public Base2{
    int derived1, derived2;
    public:
    // Syntax for constructors of base classess
    Derived(int a, int b, int c, int d):Base(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printdataderived(){
        cout << "The value of derived1 is : " << derived1 << endl;
        cout << "The value of derived2 is : " << derived2 << endl;
    }
};

int main()
{
    Derived harry(1,2,3,4);
    harry.printdatabase2();
}