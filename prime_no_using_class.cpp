#include<iostream>
using namespace std;
class prime{
    int num;

    public:
    void getnum(int a){
        num=a;
    }
    void prime_series(int a, int b);
    void cal_prime(){
        for(int i=2; i<=num; i++){
            if(num%i==0){
                cout<<num<<" Number is not a prime number"<<endl;
                exit(0);
                break;
            }
            else{
                cout<<num<<" Number is a prime number"<<endl;
                exit(0);
            }
        }
    }
};
void prime::prime_series(int a, int b){
    for(int i=a; i<=b; i++){
        for(int j=2; j<=i; j++){
            if((i%j)!=0){
            cout<<i<<" ";
        }
    }
}
}
int main(){
    prime p1;
    // p1.getnum(86);
    p1.prime_series(1,10);
    // p1.cal_prime();

}