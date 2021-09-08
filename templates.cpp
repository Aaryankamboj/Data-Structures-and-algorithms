#include <iostream>
using namespace std;
template <class t>
t mini(t a, t b)
{
    return (a < b ? a : b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << " Minimum between two integers : " << mini(a, b) << endl;
    float c, d;
    cin >> c >> d;
    cout << "Minimum of between two floats : " << mini(c, d) << endl;
    char e, f;
    cin >> e >> f;
    cout << "Minimum of between two charachters: " << mini(e, f);
}