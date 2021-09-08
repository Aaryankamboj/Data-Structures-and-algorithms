#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
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

        int temp;
        int s = 0;
        int e = n-1;
        while (s < e)
        {
            temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}