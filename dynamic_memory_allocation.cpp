#include<iostream>
using namespace std;
int main()
{

int size;
cin>>size;
// Dynamic memory allocation in heap
int *arr=new int[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
}
for(int i=0;i<size; i++)
cout<<arr[i]<<" ";
cout<<endl;

delete[]arr;
int *var = new int;
*var=20;
cout<<*var;
delete var;

}