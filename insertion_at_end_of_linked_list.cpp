#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
Node* insert_at_end(Node*head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=head;
    head->next=temp;
    return temp;  
}
Node*insert_end(Node*head, int data){
    Node*temp=new Node();
    Node*tp=head;
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    while(tp->next!=NULL){
        tp=tp->next;
    }
    tp->next=temp;
    temp->prev=tp;
    return head;


}
int main()
{
    Node *head = new Node;
    head->data=10;
    head->next=NULL;
    head->prev=NULL;
    Node*ptr=head;
    ptr=insert_at_end(ptr, 20);
    ptr=insert_at_end(ptr, 30);
    ptr=insert_at_end(ptr, 40);
    ptr=insert_at_end(ptr, 50);
    ptr = insert_end(ptr, 99);
     while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL";

}