#include<iostream>
using namespace std;
// int main()
// int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     if(n>0)
//     {
//         while(n%2 == 0)
//         {
//             n/=2;
//         }
//         if(n == 1)
//         {
//             cout<<"Number is power of 2"<<endl;
//         }
//     }
//     if(n == 0 || n != 1)
//     {
//         cout<<"Number is not power of 2"<<endl;
//     }
//     return 0;
    
// {
    // Using Bits Manipulation
    bool ispowerof2(int n){
        return (n && !(n & n-1));
    }
 int main(){
     cout<<ispowerof2(16);
 }










