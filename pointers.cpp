#include<iostream>
using namespace std;
int main()
{
    // int a=10;
    // int *ptr=&a;
    // cout << a << endl;
    // cout << *ptr << endl;
    // cout << ptr<<endl;
    // cout << &a <<endl;
    // cout <<*ptr+19<<endl;
    // cout << ptr++<<endl;
    int arr[3]={10,20,30};
    cout<<*arr<<endl;
    int *ptr = arr;
    cout<<*ptr<<endl;

    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;

    }
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;
        
    }
    
}