#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum = sum + arr[j];
        }
        cout << sum << " ";
    }
}