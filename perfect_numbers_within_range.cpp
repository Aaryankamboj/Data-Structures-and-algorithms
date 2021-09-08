#include<iostream>
using namespace std;


int main(){
    int limit,sum=0;
    cout<<"Enter the limit : ";
    cin>>limit;
    for(int n=1;n<=limit;n++){
        sum=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(n==sum)
        cout<<n<<" is perfect"<<endl;
     }
         
    
     
}