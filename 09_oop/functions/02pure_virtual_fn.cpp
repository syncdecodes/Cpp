
#include <iostream>
using namespace std;

/*
Pure virtual function
A pure virtual function is a function with:

No body in base class: virtual void show() = 0;
Must be overridden in derived class

Abstract Class: A class containing pure virtual function becomes an abstract class.
Abstract class can't create object but can contain noraml

*/

class Shape{
    public:
    virtual void draw() = 0; // make it pure virtual
};

class Circle: public Shape{
    public:
    void draw(){
        cout << "Drawing circle" << endl;
    }
};

int main(){
    Circle c;
    c.draw();
    return 0;
}