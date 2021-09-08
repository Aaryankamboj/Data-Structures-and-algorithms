#include<iostream>
using namespace std;
int main()
{
    int upper,lower,i,j;
    cin >> upper >> lower;
    for(i=upper; i<=lower; i++){
        
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
     }
        if(i==j){
        cout <<i<<" is a prime numnber"<<endl;
        }
    

}