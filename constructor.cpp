#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    } // Default Constructor

    // This is the constructor Initializtion
    student(string s, int a, bool g)
    {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // Parameterzied constuctor

    student(student &a)
    {
        cout << "Copy Constructor " << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } //This is a Copy Constructor

    // This is the destructor
    ~student()
    {
        cout << "Destructor Called" << endl;
    }

    void getname()
    {
        cout << name;
    }
    void printinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
    // Operator Overloading
    // Here &a is the passed object and name,age,gender are the attrubutes of another object
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    student a("aman", 23, 1);
    // a.getname();
    // a.printinfo();
    student b("rahul", 21, 0);

    student c = a;

    if (b == a)
        cout << "Same" << endl;
    else
        cout << "Not same" << endl;
}