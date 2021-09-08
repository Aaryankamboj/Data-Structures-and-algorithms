#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "alksjdhfgakj";
    // cout<<'a'-'A';
    // convert into uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout << str << endl;

    // convert to lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    cout << str << endl;

    // direct method
    // syntax : transform(begin_iterator, ending_iterator,
    //                        index from where to start conversion, upper/lower)
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str <<endl;

    transform(str.begin(), str.end(), str.begin(),::tolower);
    cout << str;
}