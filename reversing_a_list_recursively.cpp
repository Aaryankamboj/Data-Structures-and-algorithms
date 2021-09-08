#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
};

Node*insert_at_tail(Node*head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->link=NULL;
    head->link=temp;
    return temp;
}

Node*reverse_recursive(Node*head){
    if(head==NULL || head->link == NULL){
        return head;
    }
    Node*head2=reverse_recursive(head->link);
    head->link->link=head;
    head->link=NULL;
    return head2;
}
void display(Node*newhead){
    cout<<newhead->data<<" ";
    newhead=newhead->link;
}
int main(){
    Node*head=new Node();
    head->data=1;
    head->link=NULL;

    Node*ptr=head;
    ptr=insert_at_tail(ptr, 2);
    ptr=insert_at_tail(ptr, 3);
    ptr=insert_at_tail(ptr, 4);
    Node*newhead = reverse_recursive(head );
    while (newhead!=NULL)
    {
        cout << newhead->data <<" ";
        newhead=newhead->link;
    }
    

    


}