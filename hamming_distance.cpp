#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    x = x ^ y;
    int setbits = 0;
    while (x > 0)
    {
        setbits = setbits + (x & 1);
        x = x >> 1;
    }
    cout << setbits;
    // Built In method to count number of different bits
    cout << __builtin_popcount(x);

   
}