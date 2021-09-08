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
        cin >> arr[n];
    }

    int maxSum = INT_MIN;
    int currsum = 0;
    for(int i=0; i<n; i++){
        currsum+=arr[i];
        if(currsum<0)
            currsum=0;
        if(maxSum<currsum){
            currsum=maxSum;
        }
        maxSum=max(maxSum,currsum);
    }
    cout<<currsum;
    return 0;
}