#include <iostream>
using namespace std;

/* 
Static members are variables or functions that belong to the class itself rather than to any specific object (instance) of that class.
It is a class variable that is shared by all objects of the class.

Uses of Static Data Member -:
To store common data shared by all objects
To count number of objects created
To save memory
To maintain class-level info
*/

// static var
class Test
{
public:
    static int count;
    Test()
    {
        count++;
    }
    void display(){
        cout << count;
    }
};
int Test::count = 0;

// static fn: can access static var and static fn only, can't access normal members directly
class Demo
{
public:
static int x;
    static void show()
    {
        cout << "Static function value of x: " << x << endl;
    }
    void display(){
        cout << "Value of x: " << x << endl;
    }
};
int Demo::x = 100;

int main()
{
    Test t1;
    Test t2;
    Test t3;
    // t1.display();
    // cout << "Total objects: " << Test::count << endl;

    // Demo d;
    // d.display();
    // Demo::show();
    return 0;
}