#include<iostream>
using namespace std;
class Car{
    public:
    string color;
    string name;
    long int model;
    void setdata(string c, string naam, long int year){
        color=c;
        name=naam;
        model=year;
    }
    void display(){
        cout<<"Name of the car is : "<<name<<endl;
        cout<<"Color of the car is : "<<color<<endl;
        cout<<"Model of the car is : "<<model<<endl;
    }
};
int main(){
    // Car city;
    // city.setdata("Honda City", "Solid Black", 2022);
    // city.display();
    //  Car c1;
    // Car *ptr = &c1;
    // (*ptr).setdata( "Pearl White","Jeep Compass", 2030);
    // (*ptr).display();
    // (*ptr).setdata("Pearl White","Jeep Compass", 2030);
    // (*ptr).display();
    // Car*ptr=new Car;/
    Car *ptr = new Car[2];

    ptr->setdata("Pearl White","Jeep Compass", 2030);
    ptr->display();


   
}