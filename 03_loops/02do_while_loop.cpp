#include <iostream>
using namespace std;
// do while loop

/*
    do some block of code first
    THEN repeat again if condition is true
*/

int main()
{
    int count = 5;
    int num = 4;

    do
    {
        cout << count << endl;
        count++;
    } 
    while (count < num); 
    
    cout << count;

    return 0;
}