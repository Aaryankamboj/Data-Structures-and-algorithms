#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

void insert(Node**head, int data){

    Node*temp=new Node();
    temp->data=data;
    temp->link=*head;
    *head=temp;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();

    head->data = 98;
    head->link = second;
    second->data = 56;
    second->link = NULL;

    int data=78;
    insert(&head, data);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
    
}