#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
Node *insert_at_end(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->prev = head;
    temp->next = NULL;
    head->next = temp;
    return temp;
}
void insert_before_pos(Node*head, int data, int pos){
    Node*new_node=new Node();
    Node*temp=head;
    new_node->data=data;
    new_node->next=0;
    new_node->prev=0;
    
    while(temp->next!=NULL and pos>2){
        temp=temp->next;
        pos--;
    }
    Node*temp2=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next=temp2;
    temp2->prev=new_node;
}

void display(Node *head)
{
    Node *i = head;
    for (i; i != NULL; i = i->next)
    {
        cout << i->data << "->";
    }
    cout << "NULL";
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;
    head->prev = NULL;

    Node *ptr = head;
    ptr = insert_at_end(ptr, 2);
    ptr = insert_at_end(ptr, 3);
    ptr = insert_at_end(ptr, 4);

    insert_before_pos(head, 5, 3);
    display(head);
}