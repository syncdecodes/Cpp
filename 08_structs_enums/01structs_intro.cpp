#include <iostream>
using namespace std;
// struct

/*
A structure that groups related varaibles under one name
structs can contain many different data types (string, int, double, bool, etc..)
variables in a struct are known as "members"
members can be access with . "Class Member Access Operator"
*/

struct student{
    std::string name;
    double gpa;
    bool enrolled = true; // set default value as true
};

int main()
{
    student student1;
    student1.name = "Admin";
    student1.gpa = 9.6;
    student1.enrolled = true;

    std::cout << student1.name << endl;
    std::cout << student1.gpa << endl;
    std::cout << student1.enrolled << endl;
    /*
    When accessing bool var 1 corresponds with true 
    0 corresponds with false
    */

    return 0;
}