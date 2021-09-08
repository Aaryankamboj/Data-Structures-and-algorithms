#include<iostream>
#include<stdlib.h>
#define n 8
using namespace std;
class que{
    int front;
    int rear;
    int *arr;
    public:
    que(){
        arr=new int[n];
        front=0;
        rear=0;
    }
    bool isempty(){
        if(rear ==front){
            return true;
        }
        return false;
    }
    bool full(){
        if((rear+1)%n == front){
            return 1;
        } 
        return 0;
    }
    void push(int val){
        if(full()){
            return;
        }
        rear=(rear+1)%n;
        arr[rear]=val;
        cout<<"Enqueued element is : "<<val<<endl;
    }

    int dequeue(){
        int ans=0;
        if(isempty()){
            cout<<"Queue is empty";
        }
        cout<<"Dequeueing element : "<<endl;
        front=(front+1)%n;
        ans = arr[front];
        return ans;
    }

};
int main(){
    que q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout<<q1.dequeue();
    cout << q1.dequeue();
    cout << q1.dequeue();
    cout << q1.dequeue();
    cout << q1.dequeue();
    q1.push(6);
    q1.push(7);
    q1.push(8);
    cout << q1.dequeue();
    cout << q1.dequeue();
    cout << q1.dequeue();
    q1.push(9);
    cout << q1.dequeue();
    q1.push(10);
    cout<<endl;
  cout<<q1.full();

    
}