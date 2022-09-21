/* Returning Object */

#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    void set(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << "Real : " << real << "\n";
        cout << "Imaginary : " << imaginary << "\n";
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};
 
int main()
{
    Complex c1, c2, c3;

    c1.set(10.5, 20.5);
    c2.set(30.5, 40.5);

    c3 = c1.add(c2);
    
    c3.display();

    return 0;
}