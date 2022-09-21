#include <iostream>
using namespace std;

class Student
{
public:
    // char name[20];
    string name;
    int roll;
    double avg;
};

int main()
{
    Student stu;

    Student *ptr;
    ptr = new Student();

    stu.name = "Ryzen";
    stu.roll = 10;
    stu.avg = 75.56;

    ptr->name = "Debargha";
    ptr->roll = 4010;
    ptr->avg = 80.75;

    cout << "stu.name = " << stu.name << "\nstu.roll = " << stu.roll << "\nstu.avg = " << stu.avg << "\n";
    cout << "ptr->name = " << ptr->name << "\nptr->roll = " << ptr->roll << "\nptr->avg = " << ptr->avg << "\n";

    return 0;
}