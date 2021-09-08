#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag =0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            cout << "Non Prime"<< endl;
            flag = 1;
            break;
        }

    }    // it comes out by completing the loop ehich means flag had not set as 1 means no. is prime 

        if(flag == 0){
            cout << "Prime Number"<<endl;
        }
       
    return 0;
}