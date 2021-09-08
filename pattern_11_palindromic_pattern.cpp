// The Palindromic Pattern
//         1
//       2 1 2
//     3 2 1 2 3 
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5 
// Rows : 1 to n 
// Columns : In this pattern for printing columns we have 3 parts 
// 1st : for printing spaces
// 2nd : for printing reverse digits
// 3rd : for printing digits in increasing order

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int j;
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        int k = i;
        for(; j<=n; j++){
            cout << k-- <<" ";
        }
        k=2;
        for(; j<=n+i-1; j++){
            cout << k++ <<" " ;
        }
        cout<<endl;
    }
}
