#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
} ;

Node*add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = ptr;
    ptr->next = temp;
    return temp;
}

void display(Node *head)
{
   Node*tail=head->next->next->next->next;
   while(tail!=NULL){
       cout<<tail->data<<"<-";
       tail=tail->prev;
   }cout<<"NULL";
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;
    head->prev = NULL;

    Node *ptr = head;
    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 4);
    ptr = add_at_end(ptr, 5);

    display(head);
}    