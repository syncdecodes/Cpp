#include <iostream>
using namespace std;
#include <cstdlib> // Required for rand() and srand()
#include <ctime> // Required for time()
// random numbers

int main()
{
    srand(time(NULL));
    int num = rand(); // generates a random number bw 0 - 32767

    // Random number bw 1 - 6
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    return 0;
}