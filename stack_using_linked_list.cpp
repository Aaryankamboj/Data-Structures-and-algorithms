#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
}*top=NULL;

void push(int data){
    Node*newNode=new Node();
    if(newNode==NULL){
        cout << "Overflow";
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    newNode->next=top;
    top=newNode;
}
int isempty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){
    if(isempty()){
        cout << "Stack Underflow";
        exit(0);
    }
    Node*temp=top;
    int val=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    top=temp;
    return val;

}
void peek(){
    if(isempty()){
        cout<<"Stack underflow";
        exit(0);
    }
    cout<<top->data;
}
void show(){
    if(isempty()){
        cout << "Stack underflow";
        exit(0);
    }
    Node*temp=top;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int choice, data;
        cout <<"1. Push"<<endl;
        cout <<"2. Pop"<<endl;
        cout <<"3. Is Empty ?"<<endl;
        cout <<"4. Peek "<<endl;
        cout <<"5. show "<<endl;
    while (1)
    {
        cout << "Enter your choice : "<<endl;
        cin >> choice;
        switch(choice){
            case 1: cout <<"Enter the number : ";
                    cin >> data;
                    push(data);
                    break;
            case 2: cout << pop();
                    break;

            case 3: cout << isempty();break;
            case 4: peek();break;
            case 5: show(); break;
            case 6: exit(1);
            default: cout << "Enter wrong choice";
                     break;
        }
    }
    

}