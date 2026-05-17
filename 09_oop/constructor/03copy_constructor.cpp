#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

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