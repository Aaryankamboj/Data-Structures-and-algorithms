#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node *add_to_end(Node *ptr, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return ptr;
}

void del_pos(Node **head, int position)
{
    Node *current = *head;
    Node *previous = *head;
    if (*head == NULL)
    {
        cout << "Linked list is Empty";
    }
    else if (position == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

int main()
{
    Node *head = new Node();
    head->data = 45;
    head->link = NULL;
    Node *ptr = head;
    Node*second=new Node();
    second->data=78;
    second->link=NULL;
    head->link=second;
    Node*third=new Node();
    third->data=33;
    third->link = NULL;
    second->link=third;



    // ptr = add_to_end(ptr, 3);
    // ptr = add_to_end(ptr, 67);
    // ptr = add_to_end(ptr, 89);
    int position=3;
    del_pos(&head, position);
    Node*i=head;
    for(i; i!=NULL; i=i->link){
        cout<<i->data<<" ";
    }

}