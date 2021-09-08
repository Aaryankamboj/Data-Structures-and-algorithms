#include<iostream>
using namespace std;
int main(){
    // Basi Example of pointer
    int a=4;
    int *ptr=&a;
    cout << ptr <<endl;
    cout << *ptr <<endl;

    // New Operator
    int *p = new int(40); // 
    int *p = new float(40.5);
    cout <<"The value at address P is : "<< *p<<endl;
    int *arr = new int[4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    delete[] arr; //To free the block of allocated memory
    cout <<"The value at arr[0] is : "<< arr[0] <<endl;
    cout <<"The value at arr[1] is : "<< arr[1] <<endl;
    cout <<"The value at arr[2] is : "<< arr[2] <<endl;
    cout <<"The value at arr[3] is : "<< arr[3] <<endl;

    // Delete operator

}