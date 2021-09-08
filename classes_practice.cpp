#include <iostream>
#include <string>
using namespace std;
class Car
{
    int model;

public:
    string make;
    string color;

    void setmodel(int m)
    {
        model = m;
    }
    Car()
    {
        cout << "I am a default constructor";
    }

    Car(int m, string mak, string col)
    {
        cout << "I am a parameterized Constructor";
        model = m;
        make = mak;
        color = col;
    }

    Car(Car &c1)
    {
        model = c1.model;
        make = c1.make;
        color = c1.color;
    }

    bool operator==(Car &c1)
    {
        if (model == c1.model && make == c1.make && color == c1.color)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ~Car()
    {
        cout << "I am destructor";
    }
    void show()
    {
        cout << model << endl;
        cout << make << endl;
        cout << color << endl;
    }
};
int main()
{
    //     Car arr[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         int m;

    //         cout << "Enter model : ";
    //         cin >> m;
    //         arr[i].setmodel(m);
    //         cout << "Enter make : ";
    //         cin >> arr[i].make;
    //         cout << "Enter color : ";
    //         cin >> arr[i].color;
    //     }

    //    for (int i = 0; i < 3; i++)
    //    {
    //        arr[i].show();
    //    }

    Car c1(2020, "buggati", "red");
    // c1.show();
    // Car c2(2021, "tesla", "mettalic silver");
    // Car c2=c1;
    // c2.show();
    Car c2(c1);
    Car c3(2016, "Mercedes", "pearl white");
    if (c3 == c2)
    {
        cout << "Same";
    }
    else
    {
        cout << "Not same";
    }
}