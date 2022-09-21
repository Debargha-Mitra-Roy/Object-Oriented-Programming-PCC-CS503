#include <iostream>
using namespace std;

class Index
{
    int count;

public:
    Index()
    {
        count = 0;
    }

    Index(int i)
    {
        count = i;
    }

    void operator++()
    {
        count++;
    }

    void display()
    {
        cout << "Count = " << count << "\n";
    }
};

int main()
{
    Index obj;

    ++obj; // obj.operator++()
    obj.display();

    // obj++; // obj.operator++() // Error
    // obj.display();

    Index ob1, ob2;
    // ob1 = ob2++; // obj.operator++() // Error

    return 0;
}