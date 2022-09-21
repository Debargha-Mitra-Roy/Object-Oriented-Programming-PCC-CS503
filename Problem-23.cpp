/* Operator Overloading :-
 *
 * Operator overloading is a technique in which we can change the meaning of an operator in a particular context.
 * It is a technique in which we can change the meaning of an operator in a particular context.
 * Only in C++, not in JAVA.
 *
 */

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = imaginary = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << "Real : " << real << "\n";
        cout << "Imaginary : " << imaginary << "\n";
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main()
{
    Complex c1(1, 2), c2(3, 4), c3;

    c3 = c1 + c2; // c1.operator+(c2);

    c3.display();

    return 0;
}