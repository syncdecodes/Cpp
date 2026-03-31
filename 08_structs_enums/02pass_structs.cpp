#include <iostream>
using namespace std;
// pass structs as arguments

// pass by value or by ref - preferred ref

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car); // function decoration

int main()
{
    Car car1;
    Car car2;

    car1.model = "Ford-150";
    car1.year = 2023;
    car1.color = "Blue";

    car2.model = "Lamborghini-hurricane";
    car2.year = 2024;
    car2.color = "Black";

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    std::cout << "original address(pass by ref): " << &car << endl;
    std::cout << car.model << endl;
    std::cout << car.year << endl;
    std::cout << car.color << endl;
}
