#include <iostream>
using namespace std;
// constructor

/*
is a special method that is automatically called when an object is instantiated
useful for assigning values to attributes as arguments
The constructor has the same name as the class

if the attribute name is different form the parameters name we don't need the this keyword
*/

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    Student student1("Dev", 18, 7.36);
    Student student2("Admin", 24, 8.24);
    
    std::cout << student1.name << " " << student1.age << endl;
    std::cout << student2.name << " " << student2.age << endl;

    return 0;
}