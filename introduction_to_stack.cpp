#include<iostream>
using namespace std;
#define n 100;
class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int [100];
        top=-1;
    }
    void push(int x){
        if(top == 100){
            cout <<"Overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"UnderFlow No element to popped" << endl;
            return ;

        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element in stack "<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.Top();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    if(s.empty()){
        cout<<"Stack is empty";
    }
}