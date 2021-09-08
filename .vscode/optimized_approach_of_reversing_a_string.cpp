#include<iostream>
using namespace std;
void reverse(string &s, int idx=0){
    if(idx==s.length()){
        return;
    }
    reverse(s,idx+1);
    cout<<s[idx];
}

int main(){
    reverse("binod",0);

}