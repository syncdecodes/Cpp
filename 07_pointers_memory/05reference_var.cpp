#include <iostream>
using namespace std;

/*
Reference variable is an alias—an alternative name—for an existing variable

Aliasing: It does not have its own memory address like a pointer;
it shares the memory address of the variable it refers to.

Initialization: A reference must be initialized when it is declared.

No Nulls: You cannot have a null reference

Permanence: Once a reference is initialized to an object,
it cannot be changed to refer to another object.

common use case -:
pass by ref
return by ref
range based loops
*/ 

int main()
{
    int x = 10;
    int &y = x; // new name for var x is y

    cout << y << endl; // 10
    cout << x << endl; // 10

    // Address of y will be same as x
    cout << "Address of var x: " << &y << endl;
    cout << "Address of var x: " << &x << endl;
    return 0;
}