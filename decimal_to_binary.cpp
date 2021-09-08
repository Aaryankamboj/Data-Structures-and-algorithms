#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Binary Equilvalent is:";
      for(int i=top; i>=0; i--)
      cout<<stack[i];
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
void dectobin(int x){
    while (x!=0)
    {
        int rem=x%2;
        push(rem);
        x=x/2;
    }
    

}
int main() {
  int dec;
  cout<<"Enter the decimal number : ";
  cin >> dec;

  dectobin(dec);
  display();
   return 0;
}