#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "671984971932";
    // if we sort the string in descending order, the number we obtain is greatest number

    sort(s.begin(),s.end(), greater<int>());
    cout<<s;
}