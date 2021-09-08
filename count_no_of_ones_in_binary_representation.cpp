// Approach : In n & n-1 we have all the same bits as n except thr rightmost set bit
//           So we do n & n-1 until we got 0 and update a variable named as count and at
//            the end we print the count
#include <iostream>
using namespace std;
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int main()
{
    cout << numberofones(19);
}