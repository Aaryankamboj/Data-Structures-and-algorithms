// In this method, we use only 1 stack and another inbuilt function call stack
#include<iostream>
#include<stack>
using namespace std;
class que{
    stack<int> s1;
    public:
    void push1(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty";
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
   
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }

};
int main(){
    que q;
    q.push1(1);
    q.push1(2);
    q.push1(3);
    q.push1(4);
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();

} 