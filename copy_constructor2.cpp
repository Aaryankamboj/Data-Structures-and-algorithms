#include<iostream>
using namespace std; 
class character{
    char ch;
    public:
    character(){
        cout<<"Default constructor invoked ";
        ch='a';

    }
     character(char charac){
         ch = charac;
     }
       character(character &obj){
         ch = obj.ch;
     }
     void display(){
         cout<<"The charachter you entered is : "<<ch<<endl;

     }
    
};

int main(){
    character c1('A'),c3;
    c1.display();
    character c2(c1);
    c2.display();

    c3 = c2;
    c2.display();
    character c4;
    c4.display();

    return 0;
}