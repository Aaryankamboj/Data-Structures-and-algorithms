#include<iostream>
using namespace std;
#define max 4
int stack_arr[max];      // Global Declaration of stack
int top = -1;            // Stack is empty
void push(int x){
    if(top==max-1){
        cout << "Stack is full";
        return;
    }
    top++;
    stack_arr[top]=x;    
}
// void pop(){
//     free(top);
//     top--;
// }
void top2(){
    cout<<stack_arr[top];
}
int main(){
    push(1);
    push(2);
    push(3);
    // pop();
    top2();
}