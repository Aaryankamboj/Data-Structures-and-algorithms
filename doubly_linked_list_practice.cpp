#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *insert_at_end(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->prev = head;
    temp->next = NULL;
    head->next = temp;
    head->prev = NULL;
    return temp;
}
void deleteAthead(Node *head)
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete (temp);
}
void deleteNode(Node *head, int pos)
{
    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (temp != NULL and count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
       temp->next->prev = temp->prev;
    }
    delete (temp);
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;

    Node *ptr = head;
    ptr = insert_at_end(ptr, 20);
    ptr = insert_at_end(ptr, 30);
    ptr = insert_at_end(ptr, 40);
    deleteNode(head, 2);
    display(head);
}