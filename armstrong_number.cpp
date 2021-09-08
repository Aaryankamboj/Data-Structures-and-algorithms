#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int orig_sum = num;
    while(num>0){
        int dig = num%10;
        sum = sum+ dig*dig*dig;
        num=num/10;
    }
    if(sum == orig_sum){
        cout << sum  << " is an armstrong number";
    }
    else{
        cout << sum <<" is not an armstrong number";
    }

}