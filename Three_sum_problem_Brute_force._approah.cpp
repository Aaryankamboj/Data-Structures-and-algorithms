#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int iter=0;iter<n;iter++){
        cin>>arr[iter];
    }

    int key;
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    found=true;
                }
            }
        }
    }
    if(found==true ){
        cout <<"Number is formed";
    }
    else{
        cout<<"Number is not formed"; 
    }
}
