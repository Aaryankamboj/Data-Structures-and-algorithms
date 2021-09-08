#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you ? " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho ?" << endl;
    }
};
class Derived : public Base1, public Base2
{
private:
    int a;

public:
    void greet()
    {
        // Remove Abiguity : means base1 ke greet ko execute karain
        Base1::greet();
    }
};
class  B{
public:
void say(){
    cout<<"Hello world"<<endl;
}
};

class D: public B{
    public:
    // D's new say() method will overwrite B's say() method
    void say(){
        cout<<"Hello USA"<<endl;
    }

};

int main()
{
    // Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived obj;
    // obj.greet();

    // Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
}