/* Inline Function */

#include <iostream>
using namespace std;

#define SQUARE(x) (x * x);

int square(int x)
{
    return (x * x);
}

inline int Square(int x)
{
    return (x * x);
}

int main()
{
    int a = 5;
    int b = square(a);
    cout << "Square of " << a << " is " << b << "\n";

    int c = 6;
    int d = Square(c);
    cout << "Square of " << c << " is " << d << "\n";

    int e = 7;
    int f = SQUARE(e);
    cout << "Square of " << e << " is " << f << "\n";

    return 0;
}