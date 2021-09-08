#include <iostream>
using namespace std;
int main()
{
    //     int *a = new int(5);
    //     cout << *a << endl;

    //     delete a;
    //     cout << *a;
    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}