#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node *insert_at_tail(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = 0;
    head->link = temp;
    return temp;
}
void createcycle(Node *head, int pos)
{
    Node *temp = head;
    Node *startnode;
    int count = 1;
    while (temp->link != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->link;
        count++;
    }
    temp->link = startnode;
}
void display(Node *head)
{
    Node *i = new Node();
    i = head;
    for (i; i != NULL; i = i->link)
    {
        cout << i->data << " ";
    }
}
void removecycle(Node*head){
    Node *slow = head;
    Node *fast = head;
    do
    {
        slow=slow->link;
        fast=fast->link->link;

    } while (slow!=fast);
    fast=head;
    while(slow->link!=fast->link){
        slow=slow->link;
        fast=fast->link;
    }
  slow->link=NULL;

}
bool checkcycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL and fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->link = 0;
    Node *ptr = head;

    ptr = insert_at_tail(ptr, 2);
    ptr = insert_at_tail(ptr, 3);
    ptr = insert_at_tail(ptr, 4);
    ptr = insert_at_tail(ptr, 5);
    ptr = insert_at_tail(ptr, 6);
    createcycle(head, 3);
    // display(head);
    cout << checkcycle(head);
    removecycle(head);
    cout << checkcycle(head);
}