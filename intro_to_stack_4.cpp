// #include<iostream>
// // #define n 10;
// using namespace std;
// class Stack{
//     int top;
//     int*arr;
//     int n;
    
//     public:
//     Stack(int elem){
//         top=-1;
//         n=elem;
//         arr=new int[n];
//     }
//     void push(int);
//     void pop();
//     void Top();
// };

// void Stack::push(int data){
//     if(top==n-1)
//     {
//         cout << "Overflow!";
//         return;
//     }
//     top++;
//     arr[top]=data;
// }
// void Stack :: pop(){
//     if(top==-1){
//         cout << "UnderFlow!";
//         return;
//     }
//     top--;
// }
// void Stack::Top(){
//     cout<<arr[top];
// }

// int main(){
// Stack st(5);
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(6);
// st.push(7);
// st.push(8);
// // st.pop();
// st.Top();

// }


// 2nd Method of declaring a stack as array
#include<iostream>
using namespace std;
#define max 5;
int stack_arr[max];
int top=-1;
void push(int data){
    if(top==max-1){
        cout << "Overflow";
        return;
    }
    top++;
    stack_arr[top]=data;
}

void pop(){
    if(top==-1){
        cout << "Underflow";
        return;
    }
    // free(stack_arr[top]);
    top--;
}
void Top(){
    if(top==-1){
        cout << "Sorry, No element to show";
        return;
    }
    cout<< stack_arr[top];
}
int main(){
    push(10);
    push(20);
    push(30);
    Top();
}










