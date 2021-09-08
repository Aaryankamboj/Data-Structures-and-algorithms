#include<iostream>
int stack[100];
int n=100;
int top=-1;
using namespace std;
void push(int data){
    if(top>=n-1){
        cout << "Overflow";
        return;
    }
    top++;
    stack[top]=data;
}


void pop(){
    if(top==-1){
        cout<<"Underflow";
        return;
    }
    top--;
}

void addall(){
    int sum=0;
    for(int i=top;i>=0;i--){
        sum-=stack[i];        
    }
    cout<<sum;
}


int main(){
    push(10);
    push(20);
    push(30);
    addall();

}