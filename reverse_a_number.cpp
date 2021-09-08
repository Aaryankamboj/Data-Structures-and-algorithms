#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int reverse = 0;
    while(num>0)
    {
        int dig = num%10;
        reverse = reverse*10+dig;
        num=num/10;  
    }
    cout << reverse;
}