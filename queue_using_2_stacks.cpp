#include<iostream>
#include<stack>
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void push1(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty";
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty() and s2.empty()){
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