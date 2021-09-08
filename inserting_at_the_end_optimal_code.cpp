#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
};
Node* add_to_end(Node*ptr, int data){
    Node*temp=NULL;
    temp=new Node();
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
int main(){
    Node*head=NULL;
    head=new Node();
    head->data=45;
    head->link=NULL;

    Node*ptr = head; // pointer pointing to head
    ptr = add_to_end(ptr, 98);
    ptr = add_to_end(ptr, 108);
    ptr = add_to_end(ptr, 56);

    // ptr = head;
    Node*i=head;
    for(i; i!=NULL; i=i->link){
        cout <<i->data<<" ";
    }

}