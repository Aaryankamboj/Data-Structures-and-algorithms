// Butterfly Pattern
// *             * 1
// * *         * * 2
// * * *     * * * 3
// * * * * * * * * 4
// * * * * * * * * 5
// * * *     * * * 6
// * *         * * 7
// *             * 8
// n = 4 but rows and columns are 8 that means we have 2*n rows and columns 
// for upper triangle for printing stars the logic is that in the firstrow we have 1 star 
// at first and 1 star at last.
// 2nd row 2 stars at the first and 2 stars at the last and so on.
// so to print stars we have for loop from i=1 to row_no.
// And to print space notice that in the first row we have 6 spaces, then 4, then 2 and 0;
// so to print space the logic is 2*n - 2*i i.e 2*4 - 2*row_no(8-2=6, 8-4=4, 8-6=2, 8-8=0)
// for lower triangle we traverse for loop in reverse order to print spaceas wecan see that 
// the spaces were increasing downwards
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout << " *";
        }
        cout<<endl;
    }

       for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout << " *";
        }
        cout<<endl;
    }

}
