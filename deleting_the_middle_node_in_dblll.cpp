#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
};
Node*add_at_end(Node*ptr, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=ptr;
    ptr->next=temp;
    return temp;
}
void display(Node*head){
    while (head!=NULL)
    {
         cout<<head->data;
        head=head->next;
    }
}
Node*delete_middle(Node*head, int position){
    Node*temp=head;
    while(position>1){
        temp=temp->next;
        position--;
    }
    Node*temp2=temp->prev;
    temp2->next=temp->next;
    temp->next->prev=temp2;
    return head;

}
int main(){
    Node*head=new Node();
    head->data=1;
    head->next=NULL;
    head->prev=NULL;

    Node*ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);
    ptr=add_at_end(ptr,5);
    

    head=delete_middle(head,3);
    display(head);
    

}