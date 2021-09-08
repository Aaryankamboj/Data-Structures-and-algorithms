// Approach --- Find the minimum element in unsorted array and swap it with the element at
//              beginning

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) // 0 to n-1 because loop 1 times kam chalegi as compared to number of elements
    {
        for (int j = i+1; j < n; j++)
        {
           if(arr[j]<arr[i]){
               int temp = arr[j];
               arr[j]= arr[i];
               arr[i]=temp;
           }
        }
        
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
}