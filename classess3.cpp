// OOPs ---> Classes and Objects
// Class ---> extension of structures
// Structures had limitations
//      --> Members are public
//      --> No methods
// classes -->  strucutres + more
// Classes can have methods and properties
// Classes --> can make few members as private and public
// Structure in C++ are typedef
// You can declare objects along with class Declaration
/* Class Employee{
         Definition
    } harry, rohan , aman;
    */
//    Harry.salary = 80000  makes no sense if salary is private
// Nesting of Member functions
#include <iostream>
#include <string>
using namespace std;
class binary
{
    
    string s;
public:

    void chk_bin(void);
    void read(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        else
        {
            cout << "Correct Binary format";
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();

    b.ones_complement();
    cout << endl;
    b.display();
}