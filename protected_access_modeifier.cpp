#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
class Derive: protected Base
{
};

/*
For a protected Member
                            Public Declaration   Private Declaration  Protected Decalaration
    1.  Private Members      Not Inherited        Not Inherited         Not Inherited
    2.  Protected Members    Protected             Private               Protected
    3.  Public Members       Public                Private               Protected
*/
int main()
{
    Base b;
    Derive d;
    // cout << d.a;  // Will not work since a is protected both as well as derived class
}