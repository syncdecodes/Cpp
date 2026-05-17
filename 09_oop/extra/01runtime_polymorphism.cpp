#include <iostream>
using namespace std;

/*
Runtime polymorphism means: Function call is decided at runtime.

It is achieved using:
virtual function, Function overriding, Base class pointer
*/

class Animal
{
public:
    // virtual tells compiler decide fn at runtime
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
    virtual void play()
    {
        cout << "Animal plays" << endl;
    }
};

class Dog : public Animal
{
public:
    // derived classes redefine same fn
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    // derived classes redefine same fn
    void sound()
    {
        cout << "Cat meows" << endl;
    }
    void play()
    {
        cout << "Cat plays" << endl;
    }
};

int main()
{
    Animal *a; // Base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();
    a->play();

    return 0;
}

