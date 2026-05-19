#include <iostream>
using namespace std;

/* 
A generic pointer is another name for a void pointer (void*).
It is a special type of pointer that can hold the memory address of any data type
*/

int main()
{
    int val = 10;
    void* genericPtr = &val; // Points to an int

    // To access the value, you must cast it back to an int*
    int *intPtr = static_cast<int*>(genericPtr);
    cout << *intPtr << endl;
    return 0;
}