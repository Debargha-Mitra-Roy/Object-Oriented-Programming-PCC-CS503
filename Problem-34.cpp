/* this keyword :-
 *
 * 'this' is a pointer that points to the current object.
 * 'this' is an implicit parameter to all member functions.
 * 'this' is used to access the data members and member functions of the current object.
 * 'this' is used to differentiate the data members and member functions of the current object from the data members and member functions of the same name in the other objects.
 * 'this' is used to pass the current object as an argument to the constructor of the class.
 * 'this' is used to return the current object from the member function.
 * 'this' is used to implement operator overloading.
 *
 */

#include <iostream>
using namespace std;

class Box
{
    int d, w, h;

public:
    Box(int d, int w, int h)
    {
        this->d = d;
        this->w = w;
        this->h = h;
    }

    void display()
    {
        cout << "Depth : " << d << "\n";
        cout << "Width : " << w << "\n";
        cout << "Height : " << h << "\n";
    }
};

int main()
{
    Box b1(10, 20, 30);
    b1.display();

    return 0;
}