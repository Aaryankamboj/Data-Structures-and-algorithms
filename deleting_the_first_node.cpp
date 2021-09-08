#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

Node *delete_node(Node *head)
{
    Node *temp = new Node();
    temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}
int main()
{
    Node *head = new Node();
    head->data = 100;
    head->link = NULL;

    Node *second = new Node();
    second->data = 200;

    Node *third = new Node();
    third->data = 87;
    second->link = third;
    third->link = NULL;

    head->link = second;
    head = delete_node(head);
    display(head);
}