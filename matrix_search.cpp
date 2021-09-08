// Given Sample :    1 4 7 11
                //   2 5 8 12
                //   3 6 9 16
                //   10 13 14 17
// Here we have to find whether a given element is present in matrix or not
// Here we also have a condition that our rows and columns must be in sorted order. look carefully
// Brute Force Approch : linear search O(n*m) 
// Better Approach     : We start from top right element. If our target element is greater,
//                       then we move downwards row++.
// If our target element is lesser then current element we move rightwards col--;

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;
    bool flag = 0;
    int r=0,c=m-1;
    while(r<n and c>=0){
        if(arr[r][c] == target){
            flag=1;
        }
        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag)
    cout << "Element found";
    else
    cout<<"Element not found";
}