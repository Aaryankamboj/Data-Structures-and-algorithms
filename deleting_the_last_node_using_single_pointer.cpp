#include <iostream>
using namespace std;
class Node
{
public: 
    int data;
    Node *link;
};
void delete_node(Node*head){
    Node*temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;
}

int main()
{
    Node *head = new Node();
    head->data = 78;
    Node *second = new Node();
    head->link = second;
    second->data = 55;
    second->link = NULL;

    Node *third = new Node();
    third->data = 99;
    third->link = NULL;
    second->link = third;
    delete_node(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->link;
    }
}