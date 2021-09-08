#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    deque<int> dq2;
    deque<int> dq3;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    // dq.pop_back();
    // dq.pop_front();
    dq2.push_back(10);
    dq2.push_back(20);
    dq2.push_back(30);
    dq2.push_back(40);
    for(int i=0,j=0;i<dq.size(),j<dq2.size();i++,j++){
    int sum=0;
        sum=dq[i]*dq2[i];
        dq3.push_back(sum);
    }
    for(int i=0;i<dq3.size();i++)
    {cout<<dq3[i] <<" ";
    }
}