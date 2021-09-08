#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int * arr= new int[n1];
    int * arr2 = new int[n2];
    for(int i=0; i < n1; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    int sum=0;
    for(int i=0 ; i<n1; i++){
        sum=sum+arr[i];
    }
    int sum2=0;
    for(int i=0; i<n2; i++){
        sum2=sum2+arr2[i];
    }
    int res=sum+sum2;
    cout<<"Sum of two arrays is : "<<res;
}