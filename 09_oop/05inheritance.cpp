#include <iostream>
using namespace std;
// inheritance

/*
A class can recieve attributes and methods from another class
Children classes inherit from a Parent class
Helps to reuse similar code found within multiple classes
*/
class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "This animal is eating" << endl;
    }
};

class Dog : public Animal
{
    public:
    std::string species;

    Dog(std::string species){
        this->species = species;
    }

    void bark(){
        std::cout << "The dog is barking";
    }
};

int main()
{

    Dog dog1("Pitbul");
    std::cout << dog1.alive << endl;
    dog1.eat();
    std::cout << dog1.species << endl;
    dog1.bark();
    return 0;
}