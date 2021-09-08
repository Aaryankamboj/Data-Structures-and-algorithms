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

bool linearsearch(Node*head, int key){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    Node*head=new Node();
    head->data=1;
    head->next=NULL;

    Node*ptr=head;
    ptr=add_at_end(ptr, 2);
    ptr=add_at_end(ptr, 3);
    ptr=add_at_end(ptr, 4);

    int key;
    cout<<"Enter the key : ";
    cin >> key;
    int ans = linearsearch(head,key);
    if(ans==true){
        cout << key<<" is present in linked list";
    }
    else{
        cout << key<<" is not present in linked list";


    }
    
    


}