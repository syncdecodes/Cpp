#include <iostream>
using namespace std;
// oop intro

/*
object = A collection of attributes and methods
They can have characteristics and could preform actions
Can be used to mimic real world items (ex. Phone, Book)
Created from a class which acts as a blue-print.

A method is a fn that belongs to a class
*/

class Human
{
public:
    std::string name = "User"; // set default value
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << name << " is eating" << endl;
    }
    void drink()
    {
        std::cout << name << " is drinking" << endl;
    }
};

int main()
{
    Human human1;
    human1.name = "Admin";
    human1.occupation = "Business-owner";
    human1.age = 24;
    human1.eat();

    Human human2;
    human2.name = "Dev";
    human2.occupation = "CEO";
    human2.age = 21;
    human2.eat();
    human2.drink();
    return 0;
}
