/* Scope Resolution Operator :-
    *
    * '::' is known as Scope Resolution Operator.
    * It is used to access the members of a class.
    * It is used to differentiate between the local variables and the global variables.
    * It links the member function with the class.
    *
 */

#include <iostream>
using namespace std;

int i = 10;

int main()
{
    int i = 20; // Local Variable

    cout << "i = " << i << "\n";
    cout << "Global 'i' = " << ::i << "\n";

    return 0;
}