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