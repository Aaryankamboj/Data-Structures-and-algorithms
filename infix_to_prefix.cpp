#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if( ch=='/' or ch=='*'){
        return 2;
    }
    else if(ch=='+' or ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtoPrefix(string s){
    reverse(s.begin(),s.end());

    stack<char> st;
    string res=" ";
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' and s[i]<='z') or (s[i]<='A' and s[i]>='Z')){
            res=res+s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty() and st.top()!=')'){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() and prec(st.top())>=prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}
int main(){
    cout<<infixtoPrefix("(a-b/c)*(a/k-l)");

}