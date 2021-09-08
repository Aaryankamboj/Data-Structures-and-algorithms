// The Zig-Zag pattern
//     *       *
//   *   *   *   *
// *       *       *
// This pattern we will print for n = 9 as we have 9 stars 
// Rows : 1 to 3
// Columns : Notice the indexes of stars. In the first row, the indexes of 2 stars
//           is (1,3) and (1,7) which on addition both comes an even no.
// So the logic is clear. At even indexes we print stars and at odd indexes
// we print spaces

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if((i+j)%4==0 || ((i==2) && (j%4==0))){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout<<endl;
 
    }
}