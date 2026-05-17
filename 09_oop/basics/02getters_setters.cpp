#include <iostream>
using namespace std;
// getters and setters

/*
Abstraction - hiding unnecessary data from outside a class
getter - function that makes a private attribute READABLE
setter - function that makes a private attribute WRITEABLE
*/

class Stove
{
private:
    int temprature = 0;

public:
    // getter
    int getTemprature()
    {
        return temprature;
    }
    // setter
    void setTemprature(int temprature){
        this->temprature = temprature;
    }
};

int main()
{

    Stove stove1;
    stove1.setTemprature(20);
    std::cout << stove1.getTemprature();
    return 0;
}