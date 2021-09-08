#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary=222;
        cout<<"Enter id of Employee: ";
        cin>>id;
        }

        void getid(void){
            cout<<"The id of employee is "<<id<<endl;

        }

};
int main()
{
    // Employee harry, rohan, aman, anuj;
    // harry.setid();
    // harry.getid();

    Employee fb[4];
    for(int i=0; i<4; i++){

    fb[i].setid();
    fb[i].getid();
    }
    



}