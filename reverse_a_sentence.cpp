#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reversesentence(string s){
    stack<string> str;
    for(int i=0; i<s.length(); i++){
        string word="" ;
        while(s[i]!=' ' and i<s.length()){
            word=word+s[i];
            i++;
        }
        str.push(word);
    }
    while(!str.empty()){
        cout << str.top()<<" ";
        str.pop();
    }cout<<endl;    
}

void reverseword(string word){
    stack<string> st;
    for(int i=0;i<word.length();i++){
        st.push(word[i]);
    }
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    
}
int main(){
    // string s;
    // cin >> s;
    // reversesentence("Hey, how are you doing?");
    reverseword("Hey");

}