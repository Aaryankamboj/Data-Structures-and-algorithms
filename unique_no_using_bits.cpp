#include<iostream>
using namespace std;
int uniquebit(int arr[], int n){
   int xorsum=0;
   for (int i = 0; i < n; i++)
   {
       xorsum=xorsum^arr[i];
   }
   return xorsum;
   
    

}
int main()
{
    int arr[]={1,2,3,4,3,2,1};
    cout << uniquebit(arr,7);

}