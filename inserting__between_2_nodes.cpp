#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

void add_to_end(Node *head, int data)
{
    Node *ptr = new Node();
    ptr = head;
    Node *ptr2 = new Node();
    ptr2->data = data;
    ptr2->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = ptr2;
}

void add_between_nodes(Node *head, int data, int pos)
{
    Node *New_node = new Node();
    Node *ptr = new Node();
    ptr = head;
    New_node->data = data;
    New_node->link = NULL;
    while (pos)
    {
        ptr = ptr->link;
        pos--;
    }
    New_node->link = ptr->link;
    ptr->link = New_node;
}
void display(Node*head){
    while(head!=NULL){
        cout <<head->data<< " ";
        head=head->link;
    }
}
int main()
{
    Node *head = new Node();
    head->data = 45;
    head->link = NULL;

    add_to_end(head, 89);
    add_to_end(head, 76);
    int data, pos;
    cout << "Enter the data to be inserted in the linked list : ";
    cin >> data;
    cout << endl;
    cout << "Enter the position where you want your data will insert : ";
    cin >> pos;

    add_between_nodes(head, data, pos);
    display(head);
}