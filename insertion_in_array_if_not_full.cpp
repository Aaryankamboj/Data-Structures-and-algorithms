#include <iostream>
using namespace std;
void insert_in_array(int arr[], int size, int element, int index, int capacity)
{
    if (size>= capacity)
    {
        cout << "Sorry there is no place in array";
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

   
}
int main()
{
    int arr[20] = {1, 2, 3,5,9};
    int size = 5;
    int element = 40;
    int index = 1;
    int capacity=20;
    insert_in_array(arr, size, element, index, 20);
    size+=1;
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }



}