#include <iostream>
using namespace std;
class Stack
{
    int *Stack_arr;
    int no;
    int first;

public:
    Stack(int n)
    {
        first = -1;
        no = n;
        Stack_arr = new int[no];
    }
    void push(int x)
    {
        if (first == no - 1)
        {
            cout << "overflow";
            return;
        }
        first += 1;
        for (int i = first; i > 0; i--)
        {
            Stack_arr[i] = Stack_arr[i - 1];
        }
        Stack_arr[0] = x;
    }

    void pop()
    {
        int value=Stack_arr[0];
        for (int i = 0; i < first; i++)
        {
            Stack_arr[i] = Stack_arr[i + 1];
        }
        first--;
    }

bool isempty(){
    if(first==-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isfull(){
    if(first==no-1){
        return 1;
    }
    else{
        return 0;
    }
}
int peek(){
    if(isempty()){
        cout<<"Underflow";
        exit(0);
    }
    return Stack_arr[0];
}
    void show()
    {
        for (int i = 0; i <= first; i++)
        {
            cout << Stack_arr[i] << " ";
        }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(49);
    // st.pop();/
    // st.pop();
    // st.pop();
    st.show();
    cout << st.peek();
    // cout << st.isempty();
    // cout << st.isfull();
}