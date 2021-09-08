#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};

Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
 void evenafterodd(Node*head){
     Node*odd=head;
     Node*even=head->next;
     Node*evennode=even;
     while (odd->next!=NULL and even->next!=NULL)
     {
         odd->next=even->next;
         odd=odd->next;
         even->next=odd->next;
         even=even->next;
     }
     odd->next=evennode;
     if(odd->next!=NULL){
         even->next=NULL;
     }
     
 }
void display(Node *head) 
{
    Node*temp=head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp =temp->next;
    }cout<<"NULL";
}


int main(){
    Node*head=new Node();
    head->data=1;
    head->next=NULL;
 
    Node*ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);
    ptr=add_at_end(ptr,5);
    ptr=add_at_end(ptr,6);
    evenafterodd(head);
    display(head);
}