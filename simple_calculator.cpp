#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    char op;
    cin >> op;
    switch (op)
    {
    case '+' : cout <<"Addition : "<< n1+n2;
               break;
    case '-': cout << "Subtraction : "<<n1-n2;
              break;
    case '*': cout <<"Multiplication : "<<n1*n2;
              break;
    case '/': cout << " Division : "<<n1/n2;
              break;
    default: cout <<"Ivalid operation";
              break;
    }
}