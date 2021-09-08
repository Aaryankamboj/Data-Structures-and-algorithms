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
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 10;
    head->next = second;
    second->data = 100;
    third->data = 200;
    fourth->data = 300;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    int count = 0;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
        count++;
    }
    cout << "The number of nodes in a list : " << count;
}