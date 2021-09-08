#include<iostream>
using namespace std;
#define n 10
class queue{
    int*arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is full";
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 or front>back){
            cout << "Queue is empty";
            return;
        }
        front++;
    }
    
    int peek(){
            if(front==-1 or front>back){
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 or front>back){
            return 1;
        }
        return 0;
    }
};
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();


}