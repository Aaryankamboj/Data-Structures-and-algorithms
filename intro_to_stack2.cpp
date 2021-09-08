#include<iostream>
using namespace std;
// #define n 10;
class Stack{
    int *arr;
    int no;
    int top;
    public:
    Stack(int n){
        arr=new int[n];
        no=n;
        top=-1;
    }
    void push(int x){
        if(top==no-1){
            cout << "Overflow, Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout << "Underflow, Stack is Empty"<<endl;
            return;
        }
        top--;
    }

    int show(){
        if(top==-1){
            cout << "Underflow, there is no element in stack"<<endl;
            // return;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main(){
    Stack st1(10);
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    st1.push(7);
    st1.push(6);
    st1.push(9);
    st1.push(8);
    st1.push(10);
    // st1.push(11);
    cout<<st1.show();
    st1.pop();
    cout<<st1.show();




}