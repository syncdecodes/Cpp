#include <iostream>
using namespace std;
// area and volumes

class Shape
{
public:
    double area;
    double volume;
};

class Cube : public Shape
{
public:
    double side;

    Cube(double side)
    {
        this->side = side;
        this->area = 6 * (side * side);
        this->volume = side * side * side;
    }
};

class Cuboid : public Shape
{
public:
    double length;
    double breadth;
    double height;

    Cuboid(double length, double breadth, double height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
        this->area = 2 * ((length * breadth) + (breadth * height) + (height * length));
        this->volume = length * breadth * height;
    }
};

int main()
{
    Cube cube1(4);
    Cuboid cuboid1(6, 12, 2);

    std::cout << "cube area: " << cube1.area << endl;
    std::cout << "cube volume: " << cube1.volume << endl;

    std::cout << "cuboid area: " << cuboid1.area << endl;
    std::cout << "cuboid volume: " << cuboid1.volume << endl;
    return 0;
}