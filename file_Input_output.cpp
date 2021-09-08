#include <iostream>
#include <fstream>
/*
The useful classess for working with files in c++ are:
1. fstreambase
2. ifstream ----> Derived from fstreambase
3. ofstream ----> Derived from fstreambase
*/

/* In order to work with files in c++, you will have to open it. there are two ways to open a file
1. Using the constructor
2. Using the member function open () of the class
*/

using namespace std;
int main()
{
    string st = "harry bhai ek great programmer hain";
    // opening files using constructor
    // ofstream is a class
    // ofstream out("samplefile.txt");  // Write operation
    // out is an object
    // out <<  st;

    // opening file and reading it
    string st2;
    ifstream in("sample2.txt");
    // in >> st2;   This will show only one word
    getline(in, st2); // This is will show complete text
    cout << st2;
}