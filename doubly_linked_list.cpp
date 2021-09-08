#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
    Node*previous;
};
Node* insert_at_end(Node*&head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->link=NULL;
    temp->previous=head;
    head->link=temp;
    return temp;  
}

void display(Node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
    
}
Node* insert_at_head(Node*head, int data){
    Node*new_node=new Node();
    new_node->data=data;
    new_node->link=head;
    new_node->previous=NULL;
    head=new_node;
    return head;
}
void deleteAthead(Node*&head){
    Node*new_node=head;
    head=head->link;
    head->previous=NULL;
    delete new_node;

}
void deletion(Node*head, int pos){
    if(pos==1){
        deleteAthead(head);
        return;
    }
    Node*temp=head;
    int count=1;
    while(temp!=NULL and count!=pos){
        temp=temp->link;
        count++;
    }
    temp->previous->link=temp->link;
    if(temp->link!=NULL){
    temp->link->previous=temp->previous; 
    }
    delete temp;
}

int main(){
    Node*head=new Node;
    head->data=1;
    
    Node*ptr=head;
    ptr=insert_at_end(ptr,2);
    ptr=insert_at_end(ptr,3);
    ptr=insert_at_end(ptr,4);
    head = insert_at_head(head,5);
    deletion(head, 2);
    display(head);
   
    
}