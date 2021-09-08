// 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // n = 1 because 1st and only 1 day toh record breaking day hi hoga
    if(n==1){
        cout << "1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = INT_MIN;  // We can also initialize it as -1, mx is for comparing the previous values of days
    for (int i = 0; i < n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(a[i],mx);

    }
    cout << ans<<endl;




}    