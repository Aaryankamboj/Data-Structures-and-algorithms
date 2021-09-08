#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int hcf;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0&& b%i==0)
        {
            hcf = i;
        }
    }
    cout << hcf;
}