#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator iter;
    iter = lst.begin();
    for (iter; iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // Syntax to create a list of zero length

    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(5);
    // display(list1);
    // display(list1);
    // Removing elements from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);   Center sse remove kar sakte hain
    display(list1);


    list<int>::iterator it;
    // it = list2.begin(); // points to list first element

    list<int> list2(3); // Empty list of 7 elements
    list<int>::iterator ito;
    ito=list2.begin();
    *ito = 45;
    ito++;
    *ito = 89;
    ito++;
    *ito =8;
    ito++;
    // display(list2);
    // list2.push_front(790);
    // display(list2);
    list1.merge(list2);
    display(list1);

    // Sorting the list
    list1.sort();
    display(list1);
    // Reverse a list
    list1.reverse();
    display(list1);
    list1.swap(list2);
    display(list1);
    display(list2);
}