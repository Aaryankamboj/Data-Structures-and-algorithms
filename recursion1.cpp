#include<iostream>
using namespace std;
void hello(int n){
    if(n==0){
        return;
    }
    cout << "Hello"<<endl;
    hello(n-1);
}
int main(){
    hello(5);
}