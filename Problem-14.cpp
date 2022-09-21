/* Passing Object to a function */

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    float salary;

    void display()
    {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
        cout << "Salary : " << salary << "\n";
    }

    void set(string name, int age, float salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
};

// Call by Value
void updateValue(Employee e)
{
    e.name = "Ajay";
    e.age = 20;
    e.salary = 35000.00;
}

// Call by Address 
void updateAddress(Employee *e)
{
    e->name = "Bimal";
    e->age = 25;
    e->salary = 30000.00;
}

// Call by Reference
void updateReference(Employee &e)
{
    e.name = "Manas";
    e.age = 26;
    e.salary = 28000.00;
}

int main()
{
    Employee e1,e2,e3;

    e1.set("Arup", 22, 25000.00);
    cout << "All Details of first object :-\n";
    e1.display();

    updateValue(e1); // Update by Value
    cout << "All Details of first object after updateValue() :-\n";
    e1.display();

    e2.set("Malay", 24, 26000.00);
    cout << "All Details of second object :-\n";
    e2.display();

    updateAddress(&e2); // Update Address
    cout << "All Details of second object after updateAddress() :-\n";
    e2.display();

    e3.set("Rahul", 23, 27000.00);
    cout << "All Details of third object :-\n";
    e3.display();

    updateReference(e3); // Update Reference
    cout << "All Details of third object after updateReference() :-\n";
    e3.display();

    return 0;
}