#include <iostream>
using namespace std;

// A class is a user defined data type that acts as a blueprint/template for creating objects.
// An object is a real instance of a class

class Student
{
public:
    // data members
    string name;
    int age;

    // member fn: function inside a class
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    Student s; // object creation

    s.name = "Arun";
    s.age = 18;

    s.display();

    return 0;
}
