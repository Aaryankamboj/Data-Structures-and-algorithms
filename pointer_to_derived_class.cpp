#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var1;
    void display()
    {
        cout << "Displaying the base class variable var1 : " << var1 << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var2;
    void display()
    {
        cout << "Displaying the base class variable var1 : " << var1 << endl;

        cout << "Displaying the derived class variable var2 : " << var2 << endl;
    }
};
int main()
{
    BaseClass *base_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_pointer = &obj_derived;    // Pointing base class pointer to derived class 
    base_pointer->var1=34;
    base_pointer->display();

}
