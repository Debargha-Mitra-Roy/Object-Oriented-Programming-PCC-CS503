/* Call by Value */

#include <iostream>
using namespace std;

void swap(int a, int b)
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

/*
 *
 * swap() gets called wih the value of a and b.
 * Called function gets called with the value of actual argument.
 * Changing of formal argument don't reflect the actual argument.
 * In call by value called function return more than one value to its calling function.
 * 
 */