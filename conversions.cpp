#include<iostream>
#include<string.h>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        ans+=x*y;  // X= 1,2,4,6----
        x=x*2;     
        n/=10;
    }
    return ans;
}
 int octaltodecimal(int n)   
 {
     int ans = 0;
     int x = 1;
     while (n>0)
     {
        int y = n%10;
        ans=ans+x*y;
        x=x*8;       // x = 1,8,16----
        n=n/10;
     }
     return ans;
     
 }
 int hexadecimaltodecimal(string n){
     int ans = 0; 
     int x=1;
     int s = n.size();
     for (int i = s-1; i>=0; i--)
     {
         if(n[i]>'0' && n[i]<'9'){
             ans+=x*(n[i]-'0');
         }
         else if(n[i]>'A' && n[i]<'Z'){
             ans+=x*(n[i]-'A'+10);
         }
         x=x*16;
     }
         return ans;
    }




int32_t main()
{
    // int n;
    // To represent numbers greater then 9 in Hexadecimal we use A, B, C and for that we use
    // string 
    string n;
     cin >> n;
    //  cout << binarytodecimal(n)<<endl;
    // cout << octaltodecimal(n) <<endl;
    cout << hexadecimaltodecimal(n)<<endl;
}