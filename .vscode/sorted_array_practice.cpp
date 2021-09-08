#include <iostream>
using namespace std;
bool sorted(int arr[], int n)

{
    if (n == 1)
    {
        return 1;
    }
    int restarray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarray);
}
int main()
{
    int arr[] = {1, 3, 4, 5, 12, 21};
    cout << sorted(arr, 6);
}