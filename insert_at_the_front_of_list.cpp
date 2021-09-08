#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

Node *insert_at_front(Node *head, int data)
{
    Node *temp = NULL;
    temp = new Node();
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}
int main()
{
    Node *head = new Node();
    head->data = 45;
    head->link = NULL;

    Node *ptr = new Node();
    ptr->link = NULL;
    ptr->data = 65;

    head->link = ptr;
    int data = 85;
    head = insert_at_front(head, data);
    // Node*temp=NULL;
    // temp=new Node();
    // temp->data=data;
    // temp->link=head;
    // head=temp;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}