#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node* delete_node(Node *head)
{
    Node *ptr = new Node();
    ptr = head;
    Node *prevptr = new Node();
    prevptr = head;
    while(ptr!=NULL){
        prevptr=ptr;
        ptr=ptr->link;
    }
    prevptr->link=NULL;
    free(ptr);
    ptr=NULL;
    return head;
}



int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 67;
    head->link = 0;
    second->data = 98;
    second->link = third;
    head->link = second;
    third->data = 55;
    third->link = NULL;
    head=delete_node(head);
    while(head!=NULL){
        cout << head->data<<" ";
        head=head->link;
    }
}