#include <iostream>
#include <process.h>
using namespace std;
template <class T, int max=10>
class stack
{
private:
    T top;
    T array[max];
public:
    stack()
    {
        top = -1;
    }
    void push(T item)
    {
        if (top == max - 1)
        {
            cout << "Overflow! Stack is full ";
            exit(0);
        }
        else
        {
            top++;
            array[top] = item;
        }
    }
    T pop()
    {
        if (top == -1)
        {
            cout << "Underflow! Stack is Empty ";
            exit(0);
        }
        else
        {
            top=top--;
            T elem = array[top];
            return elem;
        }
    }
    void display()
    {
        for (T i = 0; i <= top; i++)
        {
           cout<< array[i]<<endl;
        }
    }
};
int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(200);
    // s1.display();
    // cout<<s1.pop();
    int a1 = s1.pop();
    int a2 = s1.pop();
    cout << a1+a2;
}