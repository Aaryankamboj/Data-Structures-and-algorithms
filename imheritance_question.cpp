#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    int num1, num2;
    char choice;

public:
    void set_numbers(int a, int b, char sym)
    {
        num1 = a;
        num2 = b;
        choice = sym;
    }
    void selection(int, int, char);
};
void SimpleCalculator::selection(int a, int b, char choice)
{
    switch (choice)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
}
class ComplexCalculator
{
protected:
    int cnum1, cnum2, num;
    char C_choice;

public:
    void set_cnums(int a, int b, char sym)
    {
        cnum1 = a;
        cnum2 = b;
        C_choice = sym;
    }
    void C_selection(int, int, char);
};
void ComplexCalculator::C_selection(int cnum1, int cnum2, char C_choice)
{
    switch (C_choice)
    {
    case 's':
        cout << "Choose the number whose sin theta you want to calculate  : ";
        cin >> num;
        if (num == cnum1)
        {

            cnum1 = cnum1 * (3.14 / 2*3.14);
            cout << sin(cnum1) << endl;
        }

        else
        {
         acos(cnum2);

            cout << sin(cnum2) << endl;
        }

        break;
    case 'c':
        cout << "Choose the number whose cos theta you want to calculate  : ";
        cin >> num;
        if (num == cnum1)
            cout << cos(cnum1) << endl;

        else

            cout << cos(cnum2) << endl;

        break;
    }
}

class hybrid : public SimpleCalculator, public ComplexCalculator
{
    cout << "Hello World";
};
int main()
{
    hybrid h1;
    // h1.selection(10,20,'+');
    h1.C_selection(10, 90, 'c');
}
