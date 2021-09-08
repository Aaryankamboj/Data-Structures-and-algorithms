// Given    -- 1 0 5 6 8
// output   -- 1 1 5 6 8
// Time Complexity -- O(n)
#include<iostream>
#include<climits>
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
    // Main Logic
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i],mx);
        cout << mx <<" ";
    }
 
    
}