#include<iostream>
using namespace std;
// Pass by address
void swap(int *num1 , int *num2){
    *num1= *num1+*num2;
    *num2=*num1-*num2;
    *num1=*num1-*num2;
    cout << *num1 << " "<<*num2;
}

// Pass by reference
void swap(int &num1 , int &num2){
    num1= num1 + num2;
    num2= num1 - num2;
    num1= num1 - num2;
    cout << num1 << " "<<num2;
}

int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    swap(num1,num2);
    cout<<endl;
    cout << num1<<" "<<num2;
    return 0;

}