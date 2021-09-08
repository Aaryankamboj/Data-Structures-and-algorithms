#include<iostream>
#define n 10
using namespace std;
class Dequeue{
    int front;
    int rear;
    int *arr; 
    int N=0;
    public:
    Dequeue(){
        front=rear=-1;
        arr=new int[n];
    }
    void enqueuefront(int val){
        if(front==rear){
            cout<<"Queue is Full";
            return;
        }
        arr[front]=val;
        front--;
        N++;
    }
    void enqueuerear(int val){
        if(rear==n-1){
            cout<<"Queue is full";
        }
        rear++;
        arr[rear]=val;
        N++;
    }
    int dequeuefront(){
        if(front==-1){
            cout<<"Queue is empty";
        }
        int ans;
        front++;
        ans=arr[front];
        return ans;
        N--;
    }

    int dequeuerear(){
        if(rear==-1 ){
            cout<<"Queue is empty";
        }
        int ans=arr[rear];
        rear--;
        return ans;
        N--;
    }
    
    void display(){
        for(int i=front+1;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    int size(){

    return N;
    }
};
int main(){
    Dequeue q1;
    q1.enqueuerear(1);
    q1.enqueuerear(2);
    q1.enqueuerear(3);
    q1.enqueuerear(4);
    q1.enqueuerear(5);
    q1.enqueuefront(6);
    q1.enqueuefront(7);
    q1.enqueuefront(8);
    q1.enqueuefront(9);
    q1.enqueuefront(19);
    q1.enqueuefront(89);
    q1.dequeuefront();
    q1.dequeuefront();
    q1.dequeuefront();
    q1.dequeuefront();
    q1.dequeuerear();
    q1.dequeuerear();
    q1.display();
    cout<<endl<<q1.size();
}