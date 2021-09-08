#include<iostream>
using namespace std;
void replacepi(string s, int idx=0){
    if(idx==s.size()){
        return;
    }

    if(s[idx]=='p'&&s[idx+1]=='i'){
        cout<<"3.14";
        replacepi(s,idx+2);
    }
    else{
        cout<<s[idx];
        replacepi(s,idx+1);
    }
}
int main()
{
    replacepi("pisxxpippi",0);

}