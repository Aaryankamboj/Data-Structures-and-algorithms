#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

Node *insert_at_tail(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}
void display(Node *head)
{
    while(head!=NULL){

    cout << head->data << "->";
    head = head->link;
    }
cout<<"NULL";
}
Node *reverse_k_nodes(Node *head, int k)
{
    Node *prevptr = NULL;
    Node *current = head;
    Node *nextptr;
    int count = 0;
    while (current != NULL and count < k)
    {
        nextptr = current->link;
        current->link = prevptr;
        prevptr = current;
        current = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->link = reverse_k_nodes(nextptr, k);
    }
    return prevptr;
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->link = NULL;
    Node *ptr = head;

    ptr = insert_at_tail(ptr, 2);
    ptr = insert_at_tail(ptr, 3);
    ptr = insert_at_tail(ptr, 4);
    ptr = insert_at_tail(ptr, 5);
    ptr = insert_at_tail(ptr, 6);
    int k = 3;

    Node*headnew=reverse_k_nodes(head, k);
    display(headnew);
}
