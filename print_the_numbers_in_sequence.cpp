#include <iostream>
using namespace std;
void increment(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    increment(n - 1);
    cout << n << endl;
}

void decrement(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << endl;
    decrement(n - 1);
}
int main()
{
    int n;
    cin >> n;
    // increment(n);
    decrement(n);
}