#include<iostream>
#include<stack>

using namespace std;
int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtoPostfix(string s){
    string res=" ";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() and st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() and prec(st.top())>prec(s[i])){
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
    return res;
}
int main(){
    cout<<infixtoPostfix("(a-b/c)*(a/k-l)");

}

