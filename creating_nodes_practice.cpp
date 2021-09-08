#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;

    head = new node();
    first = new node();
    second = new node();
    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = NULL;

    while (next != NULL)
    {
        cout << next->data << " ";
        next=next->next;
    }
}