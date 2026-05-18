#include <iostream>
using namespace std;

/*
Polymorphism means “many forms”
.
Types of Polymorphism -:
| Type         | Definiton                           |      Time                    |
| ------------ | ----------------------------------- |----------------------------- |
| Compile-time | Fn call resolves during compilation |Function/Operator overloading |
| Run-time     | Fn call resolve during execution    |Function overriding           |
*/

// Function overloading: same fn with different parameters
class Print
{
public:
    void show(int x)
    {
        cout << x << endl;
    }
    void show(double y)
    {
        cout << y << endl;
    }
};

// Function overriding: Derived class redefines base class fn
class Parent
{
public:
    virtual void display()
    {
        cout << "I am parent" << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "I am child" << endl;
    }
};

int main()
{
    Print p;
    p.show(5);
    p.show(5.5);

    cout << endl;

    Parent *p1;
    Child c1;

    p1 = &c1;
    p1->display();
    
    return 0;
}