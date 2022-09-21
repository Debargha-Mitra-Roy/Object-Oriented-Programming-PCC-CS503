/* Call by Reference */

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);
    cout << "After swap :-\na = " << a << "\nb = " << b << "\n";

    return 0;
}