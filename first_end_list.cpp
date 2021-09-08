#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node *move_to_end(Node *head)
{
    Node *p = new Node();
    Node *q = new Node();
    p = head;
    q = NULL;
    if((head==NULL) || (head->link==NULL))
    return head;
    while(p->link!=NULL){
        q=p;
        p=p->link;
    }
    q->link = NULL;
    p->link=head;
    head=p;
    
    return head;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 67;
    head->link = second;
    second->data = 54;
    second->link = third;

    third->data = 44;
    third->link = NULL;
   head =  move_to_end(head);

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}