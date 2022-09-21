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

    /* Pre-increment Version */
    Index operator++()
    {
        ++count;

        Index temp(count);
        return temp;
    }

    /* Post-increment Version */
    Index operator++(int)
    {
        Index temp(count);
        count++;
        return temp;
    }

    void display()
    {
        cout << "Count = " << count << "\n";
    }
};

int main()
{
    Index ob1, ob2, ob3, ob4;

    ob1 = ++ob2; // ob1.operator++(ob2)
    ob1.display();

    ob3 = ob4++; // ob3.operator++(ob4)
    ob3.display(); // Count = 0

    ob4.display(); // Count = 1

    return 0;
}