#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_no = r;
}
void Student::get_roll_number(void)
{
    cout << "The Roll no is : " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void Exam::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::getmarks()
{
    cout << "The Marks obtained in maths are : " << physics << endl;
    cout << "The Marks obtained in physics are : " << maths << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        getmarks();
        cout << "Your percentage is " << (maths + physics) / 2 << " %" << endl;
    }
};
int main()
{
    /*
    Notes:  
    If we are inheriting B from A and C from B : [A----> B---->C],then
       1. A is the base class for B and B is the Base class for C
       2. A, B, C are called inheritance path
    */
    Result harry;
    harry.set_roll_number(400);
    harry.setmarks(99.9, 98.6);
    harry.display();
}