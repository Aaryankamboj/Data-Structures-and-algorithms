#include <iostream>
using namespace std;
class Employee

{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id of employee : " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employee is : " << id << " and this is employee no " << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
        // cout<<id;   Throws an error;
    }
};
int Employee::count=0; //Default value is 0
// Static variable declared outside the class
int main()
{
    Employee aman, harry, anuj;
    // Count is the static data member of class Employee
    // aman.id=1;
    // aman.count=1;  Cannot do because they are private
    aman.setdata();
    aman.getdata();
    Employee::getcount();
    cout << endl;
    harry.setdata();
    harry.getdata();
    Employee::getcount();
    cout << endl;

    anuj.setdata();
    anuj.getdata();
    Employee::getcount();

    // Static functions sirf static data members ko hi access kar sakte hain

}