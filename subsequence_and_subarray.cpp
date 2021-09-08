// Subarray - A contigious part of an array is a SUBARRAY
// Example  - 1 0 2 3 0 4 2 is an array
// Subarray - 2 3 0 4, 1 0 2 3, 3 0 4 2 all are the subarrays of the original array.

// Subsequence - Any elements of array combined form the subsequence but the important 
//               point is that the order of elements would not be changed.
// Example - 1, 3, 0 or 2,4,2 are the subsequences but 2,3,2,4 is not a subsequence
// Every Subarray is a Subsequence but every Subsequence is not a subarray.

// Sum of all Subarrays
// Given -[1 2 0 7 2]
// Subarrays - (1),(1,2),(1,2,0),(1,2,0,7),(1,2,0,7,2),(2),(2,0),(2,0,7),(2,0,7,2),(0),(0,7)
//             (0,7,2),(7),(7,2),(2)
// Output    - sum of all subarrays

#include<bits/stdc++.h>
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
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            /* code */
            curr+=arr[j];
            cout<<curr<<endl;
        }
        
    }
    
    
}