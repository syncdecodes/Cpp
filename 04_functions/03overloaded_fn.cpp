#include <iostream>
using namespace std;
// overload function

/*
It is valid for a function to share the same name but we need 
a differnt set of parameters
a function name + its parameters is know as a function signature
*/

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza();
    bakePizza("Onion");
    bakePizza("Onion", "Garlic");
    return 0;
}

void bakePizza()
{
    cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1)
{
    cout << "Here is your " << topping1 << " Pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2)
{
    cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}