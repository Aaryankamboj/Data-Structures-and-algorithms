#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0,b = 1,i=3;
    cout << a << " " << b <<" ";
    while(i<=n){
        int temp = a+b;
        cout << temp << " ";
        a=b;
        b = temp;
        i++;
    }
}
