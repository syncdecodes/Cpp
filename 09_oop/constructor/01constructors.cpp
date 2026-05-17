#include <iostream>
using namespace std;
// constructor

/*
A constructor is a special function automatically called when an object is created.
It has same name as class, No return type, Initializes object

if the attribute name is different form the parameters name we don't need the this keyword
*/

class Car
{
public:

    // Default constructor
    Car()
    {
        cout << "Car constructor called." << endl;
    }
};

class Student
{
public:
    std::string name;
    int age;
    double marks;

    // Parameterized constructor
    Student(std::string name, int age, double m)
    {
        this->name = name;
        this->age = age;
        marks = m;
        cout << "Student constructor called." << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks " << marks << endl;
    }
};


int main()
{
    Car c;

    Student s("Dev", 18, 7.36);
    s.display();

    return 0;
}