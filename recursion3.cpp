#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int main(){
cout<<power(2,3);
}