 #include<iostream>
 #include<math.h>
 using namespace std;
 int rainwater_trapping(int v[]){
     int n=8;
     int ans=0;
     int *left=new int[n];
     int *right=new int[n];
     left[0]=v[0];
     for(int i=1;i<n;i++){
         left[i]=max(left[i-1], v[i]);
     }
     right[n-1]=v[n-1];
     for(int i=n-1;i>=0;i--){
         right[i]=max(right[i+1], v[i]);
     }
     for(int i=0;i<n;i++){
         int prev=min(left[i],right[i]);
         ans=ans+(prev-v[i]);
     }
     return ans;
 }
 int main(){
     int v[]={3,1,2,4,0,1,3,2};
    cout << rainwater_trapping(v);
   
    
 }