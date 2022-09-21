#include<iostream>
using namespace std;

#define SQUARE(x) (x * x);

inline int Square(int y)
{
    return (y * y);
}

int main()
{
    int a = 5;
    int b = SQUARE(++a);
    cout << "b = " << b << "\n";

    int c = 5;
    int d = Square(++c);
    cout << "d = " << d << "\n";

    return 0;
}