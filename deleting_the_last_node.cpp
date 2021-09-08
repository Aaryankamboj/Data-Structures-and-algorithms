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
    if (head == NULL)
    {
        cout << "Linked list is already Empty";
    }
    else if(head->link==NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {   Node *temp = head;
        Node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main()
{
    Node *head = new Node();
    head->data = 45;
    head->link = NULL;

    Node *first = new Node();
    first->data = 55;
    first->link = NULL;

    head->link = first;
    Node *second = new Node();
    second->data = 65;
    second->link = NULL;
    first->link = second;

    head = delete_node(head);
    while(head!=NULL){
        cout << head->data <<" ";
        head=head->link;
    }
}