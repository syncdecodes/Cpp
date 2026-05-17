#include <iostream>
using namespace std;

// Inheritance allows one class to use properties and functions of another class.

class Herbivores
{
public:
    void eath()
    {
        cout << "Herbivores eat only grass and plants" << endl;
    }
};

class Carnivores{
    public:
    void eatc(){
        cout << "Carnivores eat only meat" << endl;
    }
};

/* single inheritance */
class Cow : public Herbivores
{
public:
    void display()
    {
        cout << "Cow eats only grass and plants" << endl;
    }
};

/* multilevl inheritance */
class Calf : public Cow
{
public:
    void display()
    {
        cout << "Cow baby also eats grass and plants only" << endl;
    }
};

/* multiple inheritance */
class Bear : public Herbivores, public Carnivores{
    public:
    void display(){
        cout << "Bear eats plants and animals both";
    }
};

int main()
{
    Cow c;
    c.eath();
    c.display();
    
    cout << endl;
    
    Calf c1;
    c1.eath();
    c1.display();
    
    cout << endl;    
    
    Bear b;
    b.eatc();
    b.eath();
    b.display();

    cout << endl;    
    return 0;
}

/* Hierarchical Inheritance
          Shape
         /     \
     Circle   Rectangle

   Hybrid Inheritance
        Person
        /    \
   Student  Employee
        \    /
       Manager
*/