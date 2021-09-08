#include <iostream>
#include<math.h>
using namespace std;
class Point
{
    int x, y;

public:
    friend void distance(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "The point is (" << x << " " << y << ") " << endl;
    }
};
    void distance(Point p, Point q)
    {
        int xdis = pow((q.x - p.x), 2);
        int ydis = pow((q.y - p.y), 2);
        int dis= sqrt(xdis+ydis);
        cout<<"Distance between two points is : "<< dis<<endl;
    };
int main()
{

    Point p(0, 1);
    // p.display();
    Point q(0,6);
    // p.display();
    distance(p,q);
}