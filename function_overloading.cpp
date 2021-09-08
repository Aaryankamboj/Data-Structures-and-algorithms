/*
polymorphism  ------------compile_time_pm           &           run_time_pm
                                  /\                                 |
                                 /  \                                | 
                                /    \                         virtual_functions
                               /      \
            Function_overloading     operator_overloading  
*/

#include <iostream>
using namespace std;
class College
{
public:
    void func()
    {
        cout << "I am a function with no argument";
    }

    void func(int x)
    {
        cout << "I am a function with int argument";
    }

    void func(double x)
    {
        cout << "I am a function with double argument";
    }
};                             
int main()
{
    College obj;
    obj.func();
    obj.func(4);
    obj.func(6.5);
}