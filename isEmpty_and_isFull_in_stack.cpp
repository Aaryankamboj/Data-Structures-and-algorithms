#include <iostream>

using namespace std;
class Stack
{
    int *arr;
    int top;
    int no;

public:
    Stack(int n)
    {
        arr = new int[n];
        top = -1;
        no = n;
    }

    void push(int x)
    {
        if (isfull())
        {
            cout << "Stack is full";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Stack is empty";
            return;
        }
        top--;
    }
    void show()
    {
        if (top == -1)
        {
            cout << "No element to show";
            return;
        }
        cout << arr[top];
    }
    bool isfull()
    {

        if (top == no - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void showall(){
        for(int i=0; i<=no; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Stack st(5);
    cout << "Please Enter 1 to Push " << endl;
    cout << "Please Enter 2 to Pop " << endl;
    cout << "Please Enter 3 to print Topmost element  " << endl;
    cout << "Please Enter 4 to print all elements  " << endl;
    int choice;
    int elem;
    char ch;
    do{
            cin >> choice;
        switch(choice){
            cout << "Do you want to continue?" << endl;            
            cin >> ch;
            case 1: cin >> elem;
                    st.push(elem);
                    break;
            case 2: st.pop();
                    break;
            case 3: st.show();
                    break;
            case 4: st.showall();
                     break;
            default: cout <<"please enter valid choice";
                     break;
                       
        }
    } while (ch == 'y' || ch == 'Y');

    return 0;
}