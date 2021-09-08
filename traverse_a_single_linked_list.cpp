#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
void count_no_of_nodes(Node *head)
{
    int count = 0;

    if (head == NULL)
    {
        cout << "Linked list is Empty " << endl;
    }
    Node*ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        cout << ptr->data<<" ";
        ptr=ptr->link;
    }
    cout << "The number of nodes in list : "<<count <<endl;
}
int main()
{
    Node *head = NULL;
    head = new Node();
    head->data = 45;

    Node *first = NULL;
    first = new Node();
    head->link = first;
    first->data = 98;

    Node *second = NULL;
    second = new Node();
    first->link = second;

    // This below code is same as

    // second->data = 67;
    // second->link = NULL;

    // this
    second->data = 67;
    second->link = NULL;
    head->link->link = second;

    //cout << head->data << endl;
    //cout << head->link->data << endl;
    //cout << head->link->link << endl;
    //cout << head->link->link->data << endl;
    //cout << head->link->link->link << endl;

    count_no_of_nodes(head);

    // while(head!=NULL){
    //     cout<<head->data<<" " ;
    //     head = head->link;
    // }
    Node*i = head;
    for(i; i!=NULL; i=i->link){
        cout << i->data <<" ";
    }
}