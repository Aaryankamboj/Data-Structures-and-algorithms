// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// for printing numbers the logic is n+1-row_no. like 5+1-1=5, 5+1-2=4 and so on.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}