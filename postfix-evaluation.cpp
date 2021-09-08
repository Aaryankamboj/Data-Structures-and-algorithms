// 46+2/5*7+
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int postfix(string st){
    stack<int> s;
    for(int i=0;i<st.length();i++){
        if(st[i]>='0' and st[i]<='9'){
            s.push(st[i]-'0');
        }
        else{
            int op2=s.top();
            s.pop();
            int op1=s.top();
            s.pop();
            switch(st[i]){
                case '+':s.push(op1+op2);break;
                case '-':s.push(op1-op2);break;
                case '*':s.push(op1*op2);break;
                case '/':s.push(op1/op2);break;
                case '^':s.push(pow(op1,op2));break;
            }
        }
    }
    return s.top();
}
int main(){
 cout << postfix("46+2/5*7+");
}