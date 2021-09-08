// The 0 1 Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// rows = 5, columns 1 to row_no
// Logic :  The indexeswhere 1 is to be printed is always an even no.
// as see in the first row the index is (1,1) i.e is 2. In second row the index where 1 
// present is (2,2) which is also an even number. So this is the logic
// On the odd index we print 0

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
     for(int i=0; i<=n; i++){
         for(int j=1; j<=i; j++){
             if((i+j)%2==0){
                 cout << "1 ";
             }
             else{
                 cout <<"0 ";
             }
         }
         cout <<endl;
     }
}