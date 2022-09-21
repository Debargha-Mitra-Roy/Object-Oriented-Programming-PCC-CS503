/* Call by Address */

#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a, &b);
    cout << "After swap :-\na = " << a << "\nb = " << b << "\n";

    return 0;
}

/*
 *
 * swap() gets called with the address of a and b variables.
 * Called function gets called with the address of actual argument.
 * Changing formal argument always reflect the value of actual argument.
 * When a function needs to return more than one value to its calling function than call by address is used.
 *
 */