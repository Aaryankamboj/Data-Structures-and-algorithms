#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // connecting our file with hout stream
    ofstream hout("sample2.txt");
    string name;

    // Creating a name string and filling it with string entered by the user
    cout << "Enter your name : ";
    cin >> name;

    // Writing a string to file
    hout <<"My name is " << name;
    hout.close();

    ifstream hin("sample2.txt");
    string content;
    getline(hin, content);
    cout<<"The content of file is : "<<content;

}