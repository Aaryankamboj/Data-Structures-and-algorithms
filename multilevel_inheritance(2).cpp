#include <iostream>
using namespace std;
class India
{
protected:
    int states;
    string state_name;

public:
    void setstates(int, string);
    void getstates(void);
    void show_state();
};
void India ::setstates(int no, string s_name)
{
    states = no;
    state_name = s_name;
}
void India ::getstates(void)
{
    cout << "The  Number of states in India : " << states << endl;
}
void India ::show_state(void)
{
    cout<<"The name of state is : "<<state_name<<endl;
}

class State : public India
{
protected:
    int cities;

public:
    void setcities(int);
    void getcities(void);
};
void State ::setcities(int city)
{
    cities = city;
}
void State ::getcities()
{
    cout << "The number of cities in " << state_name << " is " << cities;
}

class City : public State{
    public:
    void display(){
     cout<<" Class Finishes Here "<<endl;
     cout<<"Hope you will understand Multilevel Inheritance ";
    }

};
int main()
{
    City c1;
    c1.setstates(29, "Delhi");
    c1.getstates();
    c1.show_state();
    c1.setcities(300);
    c1.getcities();
    c1.display();


}