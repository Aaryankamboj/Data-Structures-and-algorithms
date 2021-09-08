#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
  
};

Node*add_at_end(Node*ptr,int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    ptr->next=temp;
    return temp;
}
void display(Node*head){
    Node*temp=head;
    do {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
}
Node*insert_at_head(Node*head, int data){
    Node*n=new Node();
    Node*temp=head;
    n->data=data;
    n->next=NULL;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    return head;  
}
Node*delete_at_head1(Node*head){
    Node*temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    Node*todelete=head;
    temp->next=head->next;
    head=head->next;
    delete(todelete);
    return head;
    
}
Node*delete_at_head(Node*head, int pos){
    if(pos==1){
        delete_at_head1(head);
        return head;
    }
    Node*temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }

    Node*todelete=temp->next;
    temp->next=temp->next->next;
    return head;

}


int main(){
    Node*head=new Node();
    head->data=1;
    head->next=NULL;

    Node*ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);
    ptr=add_at_end(ptr,5);
    ptr->next=head;
    head=insert_at_head(head,6);
    // display(head);
    // cout<<endl;
    head=delete_at_head(head,3);
    display(head);

}