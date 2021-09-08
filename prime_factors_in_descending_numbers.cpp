#include <iostream>
using namespace std;
class Stack{
    private:
    int no;
    int top;
    int *arr;
    public:
    Stack(int n){
        no=n;
        arr=new int[no];
        top=-1;
    }

    void push(int x){
        if(top==no-1){
            cout << "OverFlow";
            exit(0);
        }
        top++;
        arr[top]=x;
    }

    int pop(){
        if(top==-1){
            cout << "Underflow";
            exit(0);
        }
        int val=arr[top];
        top--;
        return val;
    }
    void show(){
        // while (top!=-1)
        // {
        //     cout<<arr[top]<<" ";
        //     top--;
        // }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
    void primefactors(int num){
        int i=2;
        while (num!=1)
        {   while(num%i==0){
            push(i);
            num=num/i;
            }
            i++;
        }
    }
};
int main(){
    Stack st(5);
    int num;
    cin>>num;
    st.primefactors(num);
    // st.show();
    cout<<st.pop();
    cout<<st.pop();
    cout<<st.pop();
}