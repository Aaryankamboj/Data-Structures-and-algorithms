#include<iostream>
using namespace std;
int fact(int num)
{
    int factorial = 1;
    // for(int i=2;i<=num; i++)
    int i=2;
    while(i<=num){
        factorial*=i;
        i++;
    }
    return factorial;
}
int main()
{
    int n,r;
    cin >> n >> r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    
}
