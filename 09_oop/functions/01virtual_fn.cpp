#include <iostream>
using namespace std;

class Animal
{
public:
    // virtual tells compiler decide fn at runtime
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
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
    void sound()
    {
        cout << "Cat meows" << endl;
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

    return 0;
}