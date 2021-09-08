/* Class  : It is a user defined data type
   Syntax : class class_name
             {
                  body of clas
              };
*/

#include <iostream>
using namespace std;

class student
{
    string name; //This is private data member and to access it out of the class we use
                 // this void setname type method
public:
    //data members
    int age;
    bool gender;

    student(string s)      // This is a Constructor
    {
        name = s;
    }
    void getname()
    {
        cout << name;
    }

    void setname(string s)
    {
        name = s;
    }
    void printinfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
};

/* We cant access data members because by default they are private
   So to access them, we need to make them public */
int main()
{
    /* student a;            // a is the Object of class
    a.name="aman";
    a.age=23;
    a.gender=0;
    cout<<a.gender; */

    //    If we want to create data for multiple students then we create an array
    // {
    //     student arr[3];
    //     for (int i = 0; i < 3; i++)
        //    }
     // cin >> arr[i].name;
    //     string s;               // To access the private member
    //     cout << "Name : ";
    //     cin >> s;
    //     arr[i].setname(s);

    //     cout << "Age : ";
    //     cin >> arr[i].age;
    //     cout << "Gender : ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }

    student a("aman");
    a.getname();
}