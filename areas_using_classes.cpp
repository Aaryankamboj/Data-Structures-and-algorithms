#include <iostream>
using namespace std;
class Area
{
private:
    float pi = 3.14;

public:
    int r, choice, h, l, b;
    float area;
    void display(void);
    void cal_circ_area(int r);
    void cal_cyl_area(int r, int h);
    void cal_rect_area(int l, int b);
    void setradius(int radius, int height, int length, int breadth)
    {
        r = radius;
        // choice = ch;
        h = height;
        l = length;
        b = breadth;
    }
    void select(int ch)
    {
        choice = ch;

        switch (choice)
        {
        case 1:
            cal_circ_area(r);
            break;
        case 2:
            cal_cyl_area(r, h);
            break;
        case 3:
            cal_rect_area(l, b);
            break;
        default:
            cout << "Sorry, your request can't be preceded";
        }
    }
};
void Area::cal_circ_area(int r)
{
    area = pi * r * r;
    display();
}
void Area::cal_cyl_area(int r, int h)
{
    area = 2 * pi * r * h;
    display();
}
void Area::cal_rect_area(int l, int b)
{
    area = 2 * (l + b);
    display();
}

void Area::display(void)
{
    cout << "Area of circle is : " << area;
    exit(0);
}
int main()
{
    Area circle;
    int r, l, b, h;
    cout << "Please enter the value of radius : ";
    cin >> r;
    cout << " Please enter the value of length : ";
    cin >> l;
    cout << " Please enter the value of breadth : ";
    cin >> b;
    cout << " Please enter the value of height : ";
    cin >> h;
    circle.setradius(r, h, l, b);

    int ch;
    cout << "Enter the choice from (1,2 and 3) : ";
    cin >> ch;
    circle.select(ch);
    // circle.setradius(r);
    // circle.cal_area();
    // circle.display();
}
