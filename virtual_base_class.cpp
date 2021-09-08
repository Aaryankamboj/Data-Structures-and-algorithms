#include <iostream>
using namespace std;
/*
Student ---> Test, Sports
Test, Sports---> Result
*/
class Student
{
protected:
    int roll_no;

public:
    void setno(int a)
    {
        roll_no = a;
    }
    void printno(void)
    {
        cout << "Your Roll no is " << roll_no<<endl;
    }
};
class test : virtual public  Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your Result is : " << endl
             << "Maths :" << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : public  Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT Score is " << score << endl;
    }
};
class Result : public test, public sports
{
protected:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printno();
        print_marks();
        print_score();
        cout << "Your total score is : " << total << endl;
    }
};
int main()
{
    Result harry;
    harry.setno(849);
    harry.set_marks(87.5, 80.9);
    harry.set_score(9);
    harry.display();

}