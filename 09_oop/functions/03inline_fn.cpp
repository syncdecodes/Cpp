#include <iostream>
using namespace std;

/*
Inline function tells compiler: Replace function call with actual code.
*/

inline int sum(int a, int b){
    return a + b;
}

int main()
{
    cout << sum (5, 10);
    return 0;
}

/*
Instead of creating a seperate fn call like:
sum(5, 10);
The compiler may replace it with:
5 + 10

Advantages
Reduces function call overhead
Can improve performance for small, frequently used functions

Notes
The inline keyword is only a request to the compiler, not a command.
Large or complex functions are usually not inlined.
Functions defined inside a class are automatically treated as inline.
*/