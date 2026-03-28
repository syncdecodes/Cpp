#include <iostream>
using namespace std;
// function templates

/*
describes what a fn looks like.
Can be used to generate as many overloaded functions as needed,
each using different data types
*/

/*
All the function do the same thing the only difference is that
they accept and return different data type
we can write one function that can accept and return any data type
- function templates
*/

// int max(int x, int y);
// double max(double x, double y);
// char max(char x, char y);

// int main()
// {
//     std::cout << max(10, 5) << endl;
//     std::cout << max(10.5, 5.5) << endl;
//     std::cout << max('A', 'B') << endl;
//     return 0;
// }

// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }

// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }

// char max(char x, char y)
// {
//     return (x > y) ? x : y;
// }


// template <typename T>

// T myMax(T x, T y)
// {
//     return (x > y) ? x : y;
// }
// int main()
// {
//     std::cout << myMax(1, 2) << endl;
//     return 0;
// }

/* our template only works when both arguments are the same type */


template <typename T, typename U>

auto myMax(T x, U y)
{
    return (x > y) ? x : y;
}
int main()
{
    std::cout << myMax(1, 2.1) << endl;
    return 0;
}