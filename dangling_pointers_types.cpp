#include<iostream>
using namespace std;
// 1. function call --- > when a pointer pointing to a local variable which is not static
// int *func(){
//      int x=10;
//     //  static int x = 10;  This will not give us dangling pointer error
//     return &x;
// }
// int main(){
//     int *p = func();
//     cout<<*p;
// }

// 2. Deallocating a Memory pointed by a pointer causes a Dangling Pointer

// int main(){
//     int *ptr = (int *) malloc(sizeof(int));
//     free(ptr);

// }
// 3. When a variable gets out of scope

int main(){
    int *ptr;
    {
        int ch;
        ptr=&ch;
        cout<<ptr;

    }
    cout<<*ptr;
}