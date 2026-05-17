#include <iostream>
using namespace std;
// overloaded constructor

/*
Multuple constructors with the same name but different parameters
allows for varying arguments when instantiating an object
*/

class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza(){
        /* magic constructor */
    }
    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    Pizza pizza1("onion");
    Pizza pizza2("mushroom", "capcicum");
    Pizza pizza3;

    std::cout << pizza1.topping1 << endl;
    std::cout << pizza2.topping1 << " " << pizza2.topping2 << endl;

    return 0;
}