// The Rhombus Pattern
//     * * * * * 
//    * * * * *
//   * * * * * 
//  * * * * *
// * * * * * 
// Rows    : 1 to n
// columns : In columns we can see that first wehave to print some spaces, thereafter stars
// So to print columns there are 2 for loops 
// 1. to print spaces that goes from 1 to n-row_no. like 1 to (5-1) i.e. 4 so 4 space will print.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int i=1; i<=n; i++){
            cout << "* ";
        }
    cout<<endl;
    }
}