#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // ofstream out;
    // out.open("sample2.txt");
    // out << "This is me ";
    // out.close();


    ifstream in;
    string st;
    in.open("samplefile.txt");
    in >> st;
    cout << st;
}