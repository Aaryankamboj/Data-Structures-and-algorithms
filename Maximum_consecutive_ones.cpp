#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(auto &elem:a){
        cin>>elem;
    }

    int maxconsecutiveone=0;
    int zerocount=0;
    int start=0;
    int k=2;
    for(int end=0;end<a.size();end++){
        if(a[end]==0){
            zerocount++;
        }
        while (zerocount>k){
            if(a[start]==0){
                zerocount--;
            }
            start++;
        }
        maxconsecutiveone=max(maxconsecutiveone,end-start+1);
    }
    cout<<maxconsecutiveone;
}