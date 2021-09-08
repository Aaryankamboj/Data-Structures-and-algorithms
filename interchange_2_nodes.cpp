#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
};

int main(){
Node*head=new Node();
Node*second=new Node();
Node*third=new Node();

head->data=67;
head->link=second;
second->data=54;
second->link=third;

third->data=44;
third->link=NULL;
Node*temp=new Node();
temp=second;
head->link=temp->link;
temp->link=head;
head=temp;


while(head!=NULL){
    cout << head->data<<" ";
    head=head->link;
}


}