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
    head = new Node();

    head->data = 78;
    head->next = NULL;

    Node *current = NULL;
    current = new Node();

    current->data = 98;
    current->next = NULL;
    head->next = current;

    // There are 2 ways to add third node in the list

    // 1. Method by creating another pointer who points to new node
    Node *current2 = NULL;
    current2 = new Node();
    current2->data = 108;
    current2->next = NULL;
    current->next = current2;

    // 2. Method 2 is very easy--> by using the head pointer
    // current->data = 108;
    // current->next = NULL;
    // head->next->next = current;
    cout << head->data << endl;
    cout << head->next << endl;
    // cout << current->
    cout << head->next->data << endl;
    cout << current->next << endl;
    cout << current2->data << endl;
    cout << current2->next << endl;
}