#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x, int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void print(void){
        cout<<a<<" +  "<<b<<" i"<<endl;
    }
};
int main(){
    complex c(4,3);
    c.print();

    complex c2(5);
    c2.print();

    complex c3;
    c3.print();


}