#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.reverse();
    list1.push_front(8);
    for(auto elem:list1){
        cout<<elem<<" ";
    }
}