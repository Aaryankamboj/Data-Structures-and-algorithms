#include<iostream>
using namespace std;

void reverse(string str){
    if(str.length()==0){     // base case
        return;
    }
    string ros = str.substr(1);
    reverse(ros);
    cout<<str[0];

}

int main(){
    string str="binod";
    reverse(str);

}