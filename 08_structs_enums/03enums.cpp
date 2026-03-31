#include <iostream>
using namespace std;
// enums

/*
A user defined data type that consists
of paired named-integer constants.
Great if we have a set of potential options
*/

enum Day
{
    sun = 0,
    mon = 1,
    tue = 2,
    wed = 3,
    thu = 4,
    fri = 5,
    sat = 6
};

int main()
{

    Day today = mon;
    cout << today << ": "; // 0

    switch (today)
    {
    case sun:
        std::cout << "Sunday" << endl;
        break;
    case mon:
        std::cout << "monday" << endl;
        break;
    case tue:
        std::cout << "tuesday" << endl;
        break;
    case wed:
        std::cout << "wednesday" << endl;
        break;
    case thu:
        std::cout << "thursday" << endl;
        break;
    case fri:
        std::cout << "friday" << endl;
        break;
    case sat:
        std::cout << "saturday" << endl;
    }
    return 0;
}