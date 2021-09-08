#include<iostream>
using namespace std;
int main(){
    int pocketmoney=3000;

    for(int date=1;date<=30;date++){
        if(pocketmoney==0){
            break;
        }
        cout<<date<<" "<<pocketmoney<<endl;
        pocketmoney-=300;
    }
}