// Vectors :-- Vectors are the dynamic arrays in which we dynamically customize size

#include <iostream>
#include <vector>
#include<string.h>
using namespace std;
int main()
{
    vector<int> v;
v
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // 1 2 3

    // Another way to iterate through a vector

    vector<int>::iterator it; // This is the way to make an iterator vector<type>:: iterator Iterator_name
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';   // *because iterator is a pointer
    }


    // Another 3rd method to iterate through a vector

    for(auto element:v){
        cout<<element<<" ";

    }// 1 2 3

    v.pop_back();
    for(auto elem:v){
        cout<<elem;
    }


/* If we want to specify the size the size of vector then the syntax is :
   vector<type> name(size, element)
   Here we have a vector with size 3 with all elements 50
*/

    vector<int> v2(3,50);
    for(auto elem:v2){
        cout<<elem;
    }

    swap(v,v2);
    for(auto elem:v){
        cout<<elem;

    }
      for(auto elem:v2){
        cout<<elem;

    }


}
