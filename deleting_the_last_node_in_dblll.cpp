#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}

Node *delete_at_end(Node *head)
{
    Node *temp = head;
    Node *temp2 = new Node();
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    temp=NULL;
    return head;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;
    Node *ptr = head;
    ptr = add_at_end(ptr, 20);
    ptr = add_at_end(ptr, 30);
    display(head);
    // head = delete_at_end(head);
}