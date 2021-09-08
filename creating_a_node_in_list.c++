// #include<stdio.h>
// #include<stdlib.h>
#include <iostream>
using namespace std;

// Creating a node in Linked List
// struct node
// {
//     int data;
//     struct node *link;
// };
class node
{
public:
    int data;
    node *link;
};


int main()
{
    // Creating head node
    node *head = NULL;
    node *first = NULL;  // Creating first node
    node *second = NULL; // Creating Second Node
    node *third = NULL;  // Creating third node
    // head = (struct node *)malloc(sizeof(struct node));
    head = new node(); // Allocating memeory in heap
    first = new node();
    second = new node();
    third = new node();

    head->data = 10;
    head->link = first;
    first->data = 20;
    first->link = second;
    second->data = 30;
    second->link = third;
    third->data = 40;
    third->link = NULL;
    printlist(head);

    cout << head->data << endl;
    cout << head->link << endl;
    cout << first->data << endl;
    cout << first->link << endl;
    cout << second->data << endl;
    cout << second->link << endl;
    cout << third->data << endl;
    cout << third->link << endl;
}