#include <iostream>
using namespace std;
// dynamic memory

/*
Memory that is allocted after the program is already compiled and running.
Use the 'new' operator to allocate memory in the heap rather that the stack.

Usefuk when we dont know how much memory we will need.
Makes our program more flexible, especially when accepting user input.
*/

int main()
{
    int *ptr = new int;
    *ptr = 50;
    cout << *ptr;
    delete ptr;
    return 0;
}

// int main()
// {
//     char *pGrades = NULL;
//     int size;

//     std::cout << "How many grades to enter in?: ";
//     std::cin >> size;

//     pGrades = new char[size];

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << "Enter grade number #" << i + 1 << ": ";
//         std::cin >> pGrades[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << pGrades[i] << " ";
//     }

//     delete[] pGrades;

//     return 0;
// }

// int main()
// {
//     int *pNum = NULL;
//     pNum = new int; // the new operator will return an address
//                     // and we are storing that address within pNum
//     *pNum = 21;

//     std::cout << "Address: " << pNum << endl; // our pointer is storing this address
//     std::cout << "Value: " << *pNum << endl; // and at this address in the heap the address contains this value: 21

//     delete pNum; // Best practice to free up the memory at this address

//     return 0;
// }