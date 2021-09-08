
#include <iostream>
using namespace std;

// To get the ith position bit
// Approach : left shift i with 1 and & with n
// if (1<<i) and n !=0 then the ith bit is 1 otherwise 0
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

// To set the bit at ith position
// Approach : left shift i with 1 and OR with n
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

// To clear the ith bit
// Approach : left shift i with 1, then take 1's complement of this (1<<i)
// then & it with n
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

// To update the ith bit it is nothing but clearbit and setbit
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return(n|(value<<pos));
}
//
int main()
{
    // cout<<getbit(5,2);
    // cout<<setbit(5,1);
    // cout<<clearbit(5,2);
    cout<<updatebit(5,2,0);
}