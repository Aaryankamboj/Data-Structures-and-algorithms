#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1); // Declaration
    void getdata(){
        cout<<a<<b<<c<<d<<e;
    }
};

void employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}

int main(){
    employee harry;
    harry.d=10;
    harry.e=20;
    // harry.a=20;   Can't accessible because declared as private

    harry.setdata(1,2,3);
    harry.getdata();

 
}