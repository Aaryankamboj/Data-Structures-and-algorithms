#include <iostream>
#include<climits>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

int main()
{
    Node *head = new Node();
    head->data = 20;
    head->link = NULL;

    Node *first = new Node();
    first->data = 218;
    first->link = NULL;
    head->link = first;

    Node *second = new Node();
    second->data = 87;
    second->link = NULL;
    first->link = second;
    // int sum=0;
    int mx=INT_MIN;

    Node*ptr=new Node();
    ptr=head;
    while(ptr!=NULL){
        // sum=sum+ptr->data;
        mx=max(mx, ptr->data);
        ptr=ptr->link;
    }
    // cout<<"The sum of nodes is : "<<sum;
    cout<<mx;
}