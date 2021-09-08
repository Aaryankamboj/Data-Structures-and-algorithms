#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void sum_list(struct node* head){
    if(head==NULL){
        cout <<"List is empty man. Better Luck next time";
    }
        int sum=0;
    while(head!=NULL){
        sum = sum+head->data;
        head=head->link;         
    }
    cout <<"Sum of elements in list is : "<<sum;
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
    
    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;
    third->data = 30;
    third->link=fourth;
    fourth->data = 40;
    fourth->link = NULL;
    
  sum_list(head);
}