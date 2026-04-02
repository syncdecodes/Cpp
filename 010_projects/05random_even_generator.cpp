#include <iostream>
using namespace std;
#include <ctime>
// random event generator

int main()
{

    srand(time(NULL));
    int random_num = (rand() % 5) + 1; // random number bw 1 - 5
    switch (random_num)
    {
    case 1:
        cout << "You won 1st prize";
        break;
    case 2:
        cout << "You won 2nd prize";
        break;
    case 3:
        cout << "You won 3rd prize";
        break;
    case 4:
        cout << "You won 4th prize";
        break;
    case 5:
        cout << "You won 5th prize";
        break;
    }
    return 0;
}