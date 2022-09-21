#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int x, int y);

    int sum();

    void display();
};

int A::sum()
{
    return (a + b);
}

void A::display()
{
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
}

int main()
{
    A obj(10, 20);

    obj.display();
    cout << "Sum = " << obj.sum() << "\n";

    return 0;
}