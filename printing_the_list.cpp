#include <iostream>
using namespace std;
struct node
{
    string data;
    struct node *link;
};
void print_list(struct node* head){
    if(head==NULL){
        cout <<"List is empty man. Better Luck next time";
    }
        int i=1;
    while(head!=NULL){
        cout << head->data<<" This is node "<<i <<" "<<endl;
        head=head->link;
        i++;
         
    }
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    
    head->data = "Aman";
    head->link = second;

    second->data = "chaman";
    second->link = third;
    third->data = "Raman";
    third->link=fourth;
    fourth->data = "Daman";
    fourth->link = NULL;
    
    print_list(head);
}