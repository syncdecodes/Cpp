#include <iostream>
using namespace std;

/*
A copy constructor in C++ is:
a special type of constructor used to create a new object
as a duplicate of an existing object of the same class.

syntax -:
ClassName(const ClassName &old_obj){
    // Body to copy member values 
}
*/

class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    // Copy constructor
    Student(const Student &s){
        marks = s.marks;
        cout << "Copy constructor called." << endl;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(97); // Normal constructor called

    // Two ways to call a copy constructor -:
    Student s2(s1); // Direct initialization
    Student s3 = s1; // Copy initialization

    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}