#include <iostream>
using namespace std;
// recursion

/*
A fn invokes itself from within
break a complex concept into a repeatable single step

advantages - less and cleaner code
             useful for sorting and searching algorithms
disad - uses more memory
        slower
*/

void walk(int steps);
int factorial(int num);

int main()
{
    // walk(5);
    std::cout << factorial(5) << endl;

    return 0;
}

int factorial(int num)
{
    /* iterative approach */
    // int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
    // }
    // return fact;


    /* recursive approach */
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }

    /*
    factorial(5)
    = 5 * factorial(4)
    = 5 * (4 * factorial(3))
    = 5 * (4 * (3 * factorial(2)))
    = 5 * (4 * (3 * (2 * factorial(1))))
    = 5 * (4 * (3 * (2 * 1)))   ← base case reached

    = 5 * 4 * 3 * 2 * 1 = 120
    */
}

void walk(int steps)
{
    /* iterative approach */
    // for (int i = 0; i < steps; i++)
    // {
    //     std::cout << "You take a step!\n";
    // }

    
    /* recursive approach */
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}