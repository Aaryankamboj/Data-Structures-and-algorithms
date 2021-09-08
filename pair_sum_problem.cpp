// Brute force approach O(n*n)

#include<iostream>
using namespace std;
// bool pairsum(int arr[], int n, int k){
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j] == k){
//                 cout << i <<" "<<j;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// Optimised Approach O(n)
bool pairsum(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return 1;
        }
        else if(arr[low]+arr[high]>k){
            high--;
            
        }
        else{
            low++;
        }
    }
    return 0;
}








int main(){
    int a[]={2,4,7,11,12,16,20,21};
    int k;
    cin >> k;
    cout << pairsum(a,8,k);
   
}