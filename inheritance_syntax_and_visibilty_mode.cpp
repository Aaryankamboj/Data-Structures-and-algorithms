#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    float salary;
    int id;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class Syntax
/*
class{{ derived-class-name}} :{{visibilty-mode}}{{ base-class-name}}
{
    class members/methods/etc....
}
*/
// creating a class programmer from base class
// Public -- >
// Notes:
/* Default visibilty mode is private
   1. private visibilty mode -- > Public members of base class become private members of derived class
   2. public  visibilty mode -- > Public members of base class become public members of derived class
   3. Private members are never inherited.
*/
class programmer : public Employee
{
public:
    int langcode = 9;
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee larry(1), rohan(2);
    cout << larry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.langcode<<endl;
    cout << skillf.id<<endl;
    skillf.getdata();
}