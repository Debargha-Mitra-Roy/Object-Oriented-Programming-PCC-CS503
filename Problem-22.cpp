/* Constructor Overloading */

#include <iostream>
using namespace std;

class Circle
{
    int r;
    double x, y;

public:
    Circle()
    {
        r = 0;
        x = 0;
        y = 0;
    }

    Circle(int r1, double x1, double y1)
    {
        r = r1;
        x = x1;
        y = y1;
    }

    Circle(int i)
    {
        r = x = y = i;
    }

    // Circle(Circle obj)
    // {
    //     r = obj.r;
    //     x = obj.x;
    //     y = obj.y;
    // }

    Circle (Circle *ptr)
    {
        r = ptr->r;
        x = ptr->x;
        y = ptr->y;
    }

    Circle (Circle &ptr)
    {
        r = ptr.r;
        x = ptr.x;
        y = ptr.y;
    }

    void display()
    {
        cout << "Radius : " << r << "\n";
        cout << "X-coordinate : " << x << "\n";
        cout << "Y-coordinate : " << y << "\n";
    }
};

int main()
{
    Circle c1;
    c1.display();

    Circle c2(10);
    c2.display();

    Circle c3(20, 2.5, 3.5);
    c3.display();

    Circle c4(&c2);
    c4.display();

    // Circle c5(c3); // Error : no matching function for call to 'Circle::Circle(Circle)'
    // c5.display();

    return 0;
}