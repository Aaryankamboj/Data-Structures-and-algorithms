#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*add_at_end(Node*ptr, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    ptr->next=temp;
    return temp;
}
int length(Node*head){
    int l=0;
    Node*temp=head;
    while (temp!=0)
    {
        l++;
        temp=temp->next;
    }
    return l;    
}
void intersect(Node*head, Node*head2, int pos){
    Node*temp=head;
    Node*temp2=head2;
    int count=0;
    while (count!=pos)
    {
        temp=temp->next;
        count++;
    }
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp;  

}
int intersection(Node*head, Node*head2){
    int l1=length(head);
    int l2=length(head2);
    int d=0;
    Node*ptr1;
    Node*ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head;
    }
    while (d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while (ptr1!=NULL and ptr2!=NULL)
    {
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
    
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<"->";
        head = head->next;
    }cout<<"NULL";
}

int main(){
    Node*head=new Node();
    head->data=1;
    head->next = NULL;
    Node*ptr=head;
    ptr=add_at_end(ptr,2);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,4);
    ptr=add_at_end(ptr,5);
    ptr=add_at_end(ptr,6);

    Node*head2=new Node();
    head2->data=9;
    head2->next = NULL;
    Node*ptr2=head2;
    ptr2=add_at_end(ptr2, 10);
    ptr2=add_at_end(ptr2, 4);
    ptr2=add_at_end(ptr2, 5);
    ptr2=add_at_end(ptr2, 6);
    display(head);
    cout<<endl;
    display(head2);
    int pos=3;
    intersect(head,head2,pos);
    int dt = intersection(head, head2);
    cout<<dt;


}