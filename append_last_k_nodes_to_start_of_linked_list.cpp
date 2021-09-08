/*
                1   2   3   4   5   6
                ^   ^   newhead     tail
                |   |
              head  newtail

*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    // Node*prev;
};

Node*add_at_end(Node*ptr, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    // temp->prev=ptr;
    ptr->next=temp;
    return temp;
}
int length(Node*head){
    int l=0;
    Node*temp=head;
    while (temp!=0)
    {
        l++;
        temp=temp->next;
    }
    return l;    
}

Node*kappend(Node*head, int k){
    Node*newhead;
    Node*newtail;
    Node*tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;


}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<"->";
        head = head->next;
    }cout<<"NULL";
}

int main(){
    Node*head=new Node();
    head->data=1;
    // head->prev=NULL;
    head->next=NULL;

    Node*ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);
    ptr=add_at_end(ptr,5);
    ptr=add_at_end(ptr,6);
    Node*newhead=kappend(head, 3);
    display(newhead);





}