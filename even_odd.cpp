#include<iostream>
using namespace std;
bool check(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int num;
    cin >> num;
    if(check(num)){
        cout<< "Number is even ";
    }
    else{
        cout << "Number is odd";
    }
}