#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
Node *add_at_head(Node *head, int data)
{
    head->data = data;
    head->next = NULL;
    head->prev = NULL;
    return head;
}
Node *add_at_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = ptr;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
Node* delete_first(Node *head)
{
// Method 1    
    // head=head->next;
    // free(head->prev);
    // head->prev=NULL;
    // return head;
// Method 2
    Node*temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    return head;
}
int main()
{
    Node *head = new Node();
    head = add_at_head(head, 1);
    Node *ptr = head;
    ptr = add_at_end(ptr, 2);
    ptr = add_at_end(ptr, 3);
    display(head);
    head = delete_first(head);
    cout << endl;
    display(head);
}