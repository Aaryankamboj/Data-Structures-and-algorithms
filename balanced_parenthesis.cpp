#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if(!st.empty() and s[i]==')')
        {
            if(st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() and s[i]==']')
        {
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() and s[i]=='}')
        {
            if(st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    while (!st.empty())
    {
        return false;
    }
    return true;
    
}
int main()
{
    // string st = "{([])}";
    string st="({[}] )";
    if (isvalid(st))
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Invalid String";
    }
}