#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
};

Node* insert_at_tail(Node*head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->link=NULL;
    head->link=temp;
    return temp;
}
Node*reverse_list(Node*head){
    Node*previous=NULL;
    Node*current=head;
    Node*next;
    while (current!=NULL)
    {
        next=current->link;       // To change links
        current->link=previous;   // To change links
    // To move list forward 
        previous = current;
        current=next;
    }
    head=previous;
    return head;
    
}
int main(){
    Node*head=new Node();
    head->data=1;
    head->link=NULL;
    Node*ptr=head;

    ptr = insert_at_tail(ptr,2);
    ptr = insert_at_tail(ptr,3);
    ptr = insert_at_tail(ptr,4);

    head = reverse_list(head);



    
    
    while(head!=NULL){
        cout<<head->data<<"->"<<" ";
        head=head->link;
    }cout<<"NULL";

}