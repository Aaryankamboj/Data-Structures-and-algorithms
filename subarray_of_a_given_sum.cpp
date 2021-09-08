// Given ---- [1,2,3,7,5] an array with 5 elements
// S is given with the value like 12. We have to find the subarray whose sum
// is equal to the S variable.
// Output --- [2,3,7]
// Approach --- We make 2 variables start and end points to the starting and
//              ending index. Also a current_sum that stores the sum of 
//              current subarray.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0,st=-1,end=-1,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout << i+1 <<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        /* code */
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<< st<<" "<<end<<endl;
}
