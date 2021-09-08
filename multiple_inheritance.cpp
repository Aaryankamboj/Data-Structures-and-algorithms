#include<iostream>
using namespace std;
class Base1{
    protected:
    public:
    int baseint;
    void getbaseint(int a){
        baseint=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:

    void getbase2int(int a){
        base2int=a;
    }
};
class Derived:public Base1, public Base2{
public:
void show(){
    cout<<"The value of Base 1 is : "<<baseint<<endl;
    cout<<"The value of Base 2 is : "<<base2int<<endl;
    cout<<"The sum of these values is : "<<baseint+base2int;
}
};
int main()
{
    Derived harry;
    harry.getbaseint(32);
    harry.getbase2int(52);
    harry.show();
    return 0;
}