#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
int length(Node *head)
{
    Node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count % 2 == 0)
    {
        return count / 2;
    }
    else
    {
        return (count / 2) + 1;
    }
    return -1;
}
Node *return_middle(Node *head)
{
    int l = length(head);
    Node *temp = head;
    l--;
    while (l)
    {
        temp = temp->next;
        l--;
    }
    head = temp;
    return head;
}
void display(Node *newhead)
{
    while (newhead != NULL)
    {
        cout << newhead->data << "->";
        newhead = newhead->next;
    }
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;

    Node *ptr = head;
    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 4);
    ptr = add_at_end(ptr, 5);
    ptr = add_at_end(ptr, 6);
    ptr = add_at_end(ptr, 7);

    Node *newhead = return_middle(head);
    display(newhead);
}