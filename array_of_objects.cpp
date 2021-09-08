#include <iostream>
using namespace std;
class Shop
{
    int item;
    float price;
    public:

    void setitems(int a, float b)
    {
        item = a;
        price = b;
    }
    void display()
    {
        cout << "The item code is : " << item << endl;
        cout << "The Price of item is : " << price << endl;
    }
};
int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp=ptr;
    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the Item Code : " <<i+1<< endl;
        cin >> p;
        cout << "Enter the Price of item : " << i+1<< endl;
        cin >> q;
        ptr->setitems(p, q);
        ptr++;
    }


    for(i=0; i<size; i++){
        ptrTemp->display();
        ptrTemp++;
    }
}