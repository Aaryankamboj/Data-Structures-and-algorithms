#include <iostream>
class Node
{
public:
    int data;
    Node *link;
};
Node*delete_node(Node*head){
    Node*ptr=new Node();
    ptr=head;
    while(ptr!=NULL){
        ptr=ptr->link;
        free(head);
        head=ptr;
    }
    return head;
}
using namespace std;
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 100;
    head->link = NULL;

    second->data = 200;
    second->link = third;
    head->link = second;
    third->data = 300;
    third->link = NULL;
    head=delete_node(head);

  if(head==NULL){
      cout<<"Linked list is Empty";
  }
     
    
}