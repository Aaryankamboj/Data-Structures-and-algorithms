#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

};
Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
// Iterative Method
Node *merge(Node *head, Node *head2)
{
    Node *p1;
    p1=head;
    Node *p2;
    p2=head2;

    Node *dummynode = new Node();
    Node *p3 = dummynode;
    while (p1 != NULL and p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    } 
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummynode->next;
}

// Recursive Method
Node*mergeRecursive(Node*head, Node*head2){
    if(head==NULL){
        return head2;
    }
    if(head2==NULL){
        return head; 
    }
    Node*result;
    if(head->data<head2->data){
        result=head;
        result->next= mergeRecursive(head->next,head2);
    }
    else{
        result=head2;
         result->next= mergeRecursive(head, head2->next);
    }
    return result;
}
int main()
{
    Node *head = new Node();
    Node *head2 = new Node();
    head->data=1;
    head->next=0;

    head2->data=2;
    head2->next=0;

    int arr[] = {1, 4 , 5, 70 };
    int arr2[] = {2, 3, 90 };
    

    Node *ptr = head;
    Node *ptr2 = head2;
    for (int i = 1; i < 4; i++)
    {
        ptr = add_at_end(ptr, arr[i]);
    }

    for (int i = 1; i < 3; i++)
    {
        ptr2 = add_at_end(ptr2, arr2[i]);
    }
    Node*newhead = mergeRecursive(head, head2);

    display(newhead);
//     display(head);
//     display(head2);
}