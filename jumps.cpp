#include<iostream>
using namespace std;
int main(){
    // Continue
    int pocketmoney=3000;
    for(int i=1;i<=30;i++){
        if(i%2==0){
         continue;
        }
         if(pocketmoney==0){
           break;
         }
        cout<<i <<" Go out today"<<endl;
        pocketmoney=-300;
    }
}