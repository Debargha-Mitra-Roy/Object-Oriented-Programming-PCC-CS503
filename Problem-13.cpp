#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    /* b is a reference variable of a ie. at runtime the b is also the name of variable a */
    int &b = a;

    cout << "Address of a : " << &a << "\n";
    cout << "Address of b : " << &b << "\n";

    a += 10;

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    b += 10;

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}