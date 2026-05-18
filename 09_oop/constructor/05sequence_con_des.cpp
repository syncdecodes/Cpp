#include <iostream>
using namespace std;

/*
(ii) Sequence of Constructors and Destructors in Inheritance
Constructor Calling Sequence:

Base class constructor is called first
Derived class constructor is called after that

Reason:
Derived class depends on base class
So base part must be initialized first
Destructor Calling Sequence


Destructors are called in reverse order:

Derived class destructor executes first
Base class destructor executes last

Reason:
Derived class resources should be destroyed first
Then base class cleanup happens
*/

class Base
{
public:
    Base()
    {
        cout << "Base constructor" << endl;
    }
    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Child: public Base 
{
public:
    Child()
    {
        cout << "Child constructor" << endl;
    }
    ~Child()
    {
        cout << "Child destructor" << endl;
    }
};

int main()
{
    Child c;
    return 0;
}