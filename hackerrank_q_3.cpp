#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str;
    cin>>str;

    stringstream ss(str);
    ss << str;
    cout<<ss;

}