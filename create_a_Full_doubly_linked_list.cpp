#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *add_at_head(Node *head, int data)
{
    head->data = data;
    head->next = NULL;
    head->prev = NULL;
    return head;
}
Node*add_at_end(Node*head, int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=head;
    head->next=temp;
    return temp;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL";
}
int main()
{
    Node *head = new Node();
    int n;
    cout << "Enter the number of nodes you want to insert : ";
    cin >> n;
    if (n == 0)
    {
        cout << "Ok, No Problem!";
    }
    else
    {   int head_data;
    cout<<"Enter the head node data : "<<endl;
    cin>>head_data;
        head = add_at_head(head, head_data);
        Node*ptr=head;
        int data;
        for(int i=1;i<n;i++){
        cout<<"Enter the node : "<<i+1<<endl;
        cin>>data;
        ptr = add_at_end(ptr,data);
        }
    display(head);
    }
}