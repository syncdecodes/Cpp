#include <iostream>
using namespace std;
// break and continue

/*
    break = break out of the loop
    continue = skip current iteration
*/

int main()
{
    for (int i = 0; i <= 20; i++)
    {
        if (i == 10) continue;
        if (i == 15) break;
        cout << i << endl;
    }
    return 0;
}