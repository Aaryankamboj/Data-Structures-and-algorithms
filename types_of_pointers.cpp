#include <iostream>
using namespace std;
int main() {
    // Null Pointer 
    // int * ptr = NULL;
    
    // int * ptr; // Returns Garbage
    // cout << "The value of ptr is " << ptr;
    // return 0;

    // Double pointer
    // int a=10;
    // int *p=&a;
    // int**q=&p;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;

    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;


    // cout<<&q;
    // void pointer
    // void *ptr;
    // int i=10;
    // cout<<i<<endl;
    // ptr = &i;
    // cout<<&i<<endl;
    // cout<<ptr;

    // wild pointer --> A pointer decalred but not initialized is a wild pointer.
    // It points to some random memory location
    int*ptr;  // Wild pointer
    int a=5;
    cout<<ptr<<endl;
    ptr = &a; // Now ptr is not a wild pointer
    cout<<ptr<<endl;
    *ptr = a+10;
    cout<<*ptr<<endl;
    cout<<ptr+1;





}