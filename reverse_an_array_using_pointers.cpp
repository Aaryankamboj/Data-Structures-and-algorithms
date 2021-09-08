#include<iostream>
using namespace std;

int main()
{
    int x[]={1,2,3,4,5};
    int *ptr = x;
   for (int i = 0; i < 2; i++)
   {
       int temp = *(ptr+i);
       *(ptr+i)=*(ptr+4-i);
       *(ptr+4-i)=temp;
   }
   for (int i = 0; i < 5; i++)
   {
       cout<< x[i]<<" ";
   }
}