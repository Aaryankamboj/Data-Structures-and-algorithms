//The Star Pattern
//       *
//     * * *
//   * * * * *
// * * * * * * * 
// * * * * * * * 
//   * * * * * 
//     * * *
//       *
// We print this in 2 parts
// Rows : 1 to n (upper part)
// Columns : Again we have 2 parts
// 1st : for spaces for loop iterates from 1 to n-row_no. i.e 3 in first row 
// 2nd : for stars 1 to (2*row_no-1) because it will contain odd number of stars in every row
// For 2nd part
// Rows : n to 1
// Columns : 2 parts
// 1st : for spaces 1 to n-row_no
// 2nd : for stars 2*row_no -1 to 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout <<"*";
        }
        cout <<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout <<"*";
        }
        cout <<endl;
    }
}
