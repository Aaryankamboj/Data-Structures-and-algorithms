#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void)
{
    cout << "Enter id of your Item no  : " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your Item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initcounter();
    // dukan.setPrice();
    // dukan.setPrice();
    // dukan.setPrice();
    for(int i=0; i<5; i++){
        dukan.setPrice();
    }
    dukan.displayPrice();
}