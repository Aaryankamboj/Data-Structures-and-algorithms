#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];
    int count = 10;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = count;
        count = count + 10;
    }
    cout<<"Array is : "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    // delete[] arr;
// Another Way to display array elements
    for(int i=0; i<5; i++){
        cout<<*arr<<" ";
        arr++;
    }
   
}