#include <iostream>
using namespace std;
void indDeletion(int arr[], int size, int index)
{

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int index = 2;
    indDeletion(arr, size, index);
    size = size - 1;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}