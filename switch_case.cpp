#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "Namaste";
        break;
    case 'b': cout <<"Hola";
            break;
    case 'c': cout <<"salut";
            break;
    case 'd': cout <<"hello";
            break;
    default: cout<<"I am still learning more";
        break;
    }
    // If we do not mention break it will display all the cases
}