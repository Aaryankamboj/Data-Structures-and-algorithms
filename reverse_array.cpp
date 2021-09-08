#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
//     int t;
//     cin >> t;
//     while(t--)
//     {
        string str;
        cin >> str;
        int n=str.length();
   
    
        int s = 0;
        int e = n - 1;
        char temp;
        while (s < e)
        {
           swap(str[s],str[e]);
            s++;
            e--;
        }
        cout<<str<<endl;
        return 0;
    }
// }