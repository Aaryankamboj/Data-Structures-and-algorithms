#include <iostream>
using namespace std;
template <class t1, class t2>
void display(t1 a, t2 b)
{
    cout << a << " " << b << endl;
}
int main()
{
    int a = 10;
    float b = 10.95;
    display(a, b);

    char ch = 'a';
    double d = 4.74837;
    display(ch, d);
}