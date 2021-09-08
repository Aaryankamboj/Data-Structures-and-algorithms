#include<iostream>
int stack[100];
int n=100;
int top=-1;
using namespace std;
void push(int x){
    if(top>=n-1){
        cout << "Overflow";
        return;
    }
    top++;
    stack[top]=x;
}

void pop(){
    if(top==-1){
        cout << "Underflow";
        return;
    }
    top--;
}
void show(){
    for(int i=top;i>=0;i--){
        cout<<stack[i] <<" ";
    }
}
int main(){
      push(1);
      push(2);
      push(3);
      push(14);
      show();
}