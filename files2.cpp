#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string st = "Do pal ruka khwaboon ka karwan ";
    // ofstream out("sample2.txt");
    // out << st;

    string st;
    ifstream in("sample2.txt");
    getline(in, st);
    cout<<st;
}