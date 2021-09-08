#include <iostream>
#include <climits>

// Time Complexity is ---> O(n)

using namespace std;
void countsort(int arr[], int n)
{
    // To find maximum element for use as a size of countarray
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

// To fill values in countarray
    int count_array[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count_array[arr[i]]++;
    }

// To modify count_array
    for (int i = 1; i <= k; i++)
    {
        count_array[i] = count_array[i] + count_array[i - 1];
    }
// To store final output in new array
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count_array[arr[i]]] = arr[i];
    }

// To copy output array into original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int arr[] = {1, 3, 2, 1, 5, 4, 6, 7, 4};
    countsort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}