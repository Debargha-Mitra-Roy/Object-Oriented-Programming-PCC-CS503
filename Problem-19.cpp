/* Constructor and Method Overloading
 *
 *  Constructor is a special member function with the same name as of the class.
 *  It is used to initialize the objects of its class.
 *  It is automatically invoked whenever an object is created.
 *  It can have default arguments.
 *  It cannot return values and does not have a return type.
 *  It can be overloaded.
 *  It is the only member of the class which does not have a return type.
 *  It is invoked at the time of object creation.
 *  It is used to allocate memory to the object.
 *  It is called automatically whenever an object is created.
 *  It is called constructor because it constructs the values at the time of object creation.
 *  It is a special type of method which is used to initialize the instance members of the class.
 *  It is invoked implicitly.
 *  It is invoked only once in the lifetime of an object.
 *  It is called automatically whenever an object is created.
 *  It is called constructor because it constructs the values at the time of object creation.
 *
 */

#include <iostream>
using namespace std;

class Circle
{
    int r;
    double x, y;

public:
    Circle(int r1, double x1, double y1)
    {
        r = r1;
        x = x1;
        y = y1;
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
    // Circle c1(); // Error

    Circle c2(10, 2.5, 3.5);
    c2.display();

    Circle *ptr;

    // ptr = new Circle(); // Error
    ptr = new Circle(20, 3.5, 6.5);
    ptr->display();

    return 0;
}
