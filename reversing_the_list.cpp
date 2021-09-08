#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
};
node* reverse(node *head)
{
    node *prev = new node();
    node *next = new node();
    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 47;
    head->link = NULL;

    second->data = 56;
    head->link=second;
    second->link = third;

    third->data = 88;
    third->link = NULL;
   head =  reverse(head);

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    return 0;
}