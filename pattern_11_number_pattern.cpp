// The number Pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5 
// Rows    : 1 to n
// Columns : Again we have 2 for loops to print columns 
// 1st :     For space loop iterates from 1 to n-row_no.
// 2nd :     For numbers loop iterates from 1 to row_no

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){                     // for rows
        int space = n-i;
        for(int j=1; j<=space ;j++){            //  for spaces in particular row
            cout << " ";
        }
        for(int j=1; j<=i; j++){                //  for numbers in particular row
            cout << j <<" ";
        }
        cout << endl;
    }

}