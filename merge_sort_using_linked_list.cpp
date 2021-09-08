#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};


Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}

void display(Node *head)
{
    Node*temp=head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp =temp->next;
    }cout<<"NULL";
}

int main()
{
    Node *head = new Node();
    head->data = 5;
    head->next = NULL;

    Node *ptr = head;
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 1);
    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 7);
    display(head);
}

