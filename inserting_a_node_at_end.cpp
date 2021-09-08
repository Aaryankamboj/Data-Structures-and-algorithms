#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *link;
};

    
void insert_value(Node*head,int data){
    Node*ptr,*temp;
    ptr = new Node();
    temp = new Node();
    temp->data = data;
    temp->link = NULL;

    ptr = head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link = temp;
}

void display(Node*head){
    while(head!=NULL){
        cout <<head->data<<" ";
        head=head->link;
    }
}
 
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = NULL;

    // To insert a new node we need data part of new node
    int data;
    cout << "Enter the data value you want to insert in a new node : "<<endl;
    cin>>data;

    insert_value(head, data);
    display(head);
}