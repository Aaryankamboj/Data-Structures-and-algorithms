/*  Function Templates can also be overloaded as normal functions
1.  When a function template is overloaded with another function Template, the name of the function remains same
    but the number of parameters varies. 
2.  When the function template is overloaded with non-template function, the function name remains same but the
    function arguments are different. 
*/
// Example--> To calculate minimum of 2 and 3 numbers of any data type
//            (overloading function template with another function template)

#include <iostream>
#include <string.h>
using namespace std;
/*
template <class t>
t cal_min(t a, t b)
{
    return (a < b ? a : b);
}
template <class t>
t cal_min(t a, t b, t c)
{
    return (a < b ? (a < c ? a : c) : (b < c ? b : c));
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = cal_min(a, b);
    cout << "Smallest is " << ans << endl;
    int ans2 = cal_min(b, c);
    cout << "Smallest is " << ans2 << endl;
    int ans3 = cal_min(a, b, c);
    cout << "Smallest is " << ans3 << endl;
}
*/

// Overloading function template with normal function (non-function-template)
template <class T>
T cal_min(T a, T b)
{
    return (a < b ? a : b);
}
string cal_min(string s1, string s2)
{
   return(s1<s2?s1:s2);
}

int main()
{
    int a, b;
    string s1,s2;

    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout<<"Enter two strings : "<<endl;
    cin >> s1 >> s2;
    cout <<endl;
    cout <<"Minimum of two numbers is : "<<cal_min(a, b)<<endl;
    cout << "Minimum of two strings is : "<<cal_min(s1, s2);
}