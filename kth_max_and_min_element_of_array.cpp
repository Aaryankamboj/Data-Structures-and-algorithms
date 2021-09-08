#include <iostream>
#include <algorithm>
using namespace std;
void sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j <n; j++){

            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        sort(arr, n);
        cout<<arr[k-1];
    }
}