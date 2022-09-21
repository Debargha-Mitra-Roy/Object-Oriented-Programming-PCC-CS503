/* Constructor & Destructor */

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor\n";
    }

    ~A()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    A obj;

    return 0;
}