#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
Node *add_to_empty(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    return head;
}
Node*add_to_beg(Node*head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->prev=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
int main()
{
    Node *head = NULL;
    head = add_to_empty(head, 45);
    head = add_to_beg(head, 55);
    head = add_to_beg(head, 8);
     while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL";

}