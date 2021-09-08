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
Node*reverse(Node*head){
    Node*ptr1 = head; 
    Node*ptr2 = ptr1->next;
    ptr1->next=NULL;
    ptr1->prev=ptr2;

    while(ptr2!=NULL){
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head=ptr1;
    return head;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<"->";
        head = head->next;
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
    cout<<endl;
    head=reverse(head);
    display(head);
}
