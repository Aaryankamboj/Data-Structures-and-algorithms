#include<iostream>
using namespace std;
int sum(int n){
    // For loop Approach
    // int ans =0;
    // for(int i=1;i<=n; i++){
    //     ans+=i;
    // }
    // return ans;
    
// THE SUM TO N approach
    int ans =(n*(n+1))/2;
    return ans;

}
int32_t main()
{
    int n;
    cin >>n;
    cout<<sum(n)<<endl;
}