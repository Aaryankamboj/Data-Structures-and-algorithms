#include <iostream>
using namespace std;

class Animals
{
public:
    string type;
    int age;
    string color;
    string sound;

    void setsound(string type1, int age1, string color1, string sound1);
    void show();
};
void Animals::setsound(string type1, int age1, string color1, string sound1)
{
    type = type1;
    age = age1;
    color = color1;
    sound = sound1;
}

void Animals::show()
{
    cout << "The Type of animal is : " << type << endl;
    cout << "The age of animal is " << age << endl;

    cout << "The color of animal is " << color << endl;
    cout << "The sound of animal is " << sound << endl;
}
int main()
{
     Animals dog;
     dog.type = "Lebra";
     dog.age = 18;
     dog.color = "Brown";
     dog.sound = "bark";
     dog.show();
     cout<<endl;
     Animals cat;
     cat.setsound("French",87,"white","meow");
     cat.show();


}