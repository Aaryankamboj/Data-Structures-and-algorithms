#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

Node *insert_at_tail(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}

void makecycle(Node *head, int pos)
{
    Node *temp = head;
    Node *startnode=new Node();
    int count = 1;
    while (temp->link != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->link;
        count++;
    }
    temp->link = startnode;
}
void removecycle(Node*head){
    Node*slow=head;
    Node*fast=head;
    do
    {
       slow=slow->link;
       fast=fast->link->link;
    } while (slow!=fast);

    fast=head;
    while(slow->link!=fast->link){
        slow=slow->link;
        fast=fast->link;
    }
    slow->link=NULL;
    
}
bool detectcycle(Node*head){
    Node*fast=head;
    Node*slow=head;
    while (fast!=NULL and fast->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
        if(fast==slow){
            return true;
        }
    }
    return false;   
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->link;
    }
    cout << "NULL";
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->link = NULL;
    Node *ptr = head;
    ptr = insert_at_tail(ptr, 2);
    ptr = insert_at_tail(ptr, 3);
    ptr = insert_at_tail(ptr, 4);
    ptr = insert_at_tail(ptr, 5);
    ptr = insert_at_tail(ptr, 6);
    makecycle(head,3);
    cout << detectcycle(head)<<endl;
    removecycle(head);
    cout << detectcycle(head)<<endl;
    display(head); 
    
}