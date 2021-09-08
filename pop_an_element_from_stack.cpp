#include <iostream>
using namespace std;
class Stack
{
    int *arr;
    int point;
    int no;

public:
    Stack(int n)
    {
        arr = new int[n];
        point = -1;
        no=n;
    }
    void push(int x)
    {
        int val=no-1;
        if (point ==val)
        {
            cout << "Overflow";
            return;
        }
        point++;
        arr[point] = x;
    }

    int pop(){
        if(point==-1){
            cout<<"Underflow";
            exit(0);
        }
        int value = arr[point];
        point--;
        return value;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int data=st.pop();
    cout<<data;



}