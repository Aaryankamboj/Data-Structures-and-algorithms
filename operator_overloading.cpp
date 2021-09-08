#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int i=0, int r=0){
        real=r;
        img=i;
    }

    Complex operator + (Complex const &obj){
        Complex res;
        res.img = img+obj.img;
        res.real = real+obj.real;
        return res;


    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }

};

int main()
{
    Complex c1(2,4),c2(4,6);
    Complex c3=c1+c2;
    c3.display();
}