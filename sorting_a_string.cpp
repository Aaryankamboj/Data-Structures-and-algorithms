#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "ncncbdykhghdliwmwe";
    sort(s.begin(),s.end());
    cout<<s;
}