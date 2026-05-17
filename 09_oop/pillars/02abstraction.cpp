#include <iostream>
using namespace std;

// Abstraction: Showing only essential information and hiding implementation details.
class ATM
{
public:
    void withdraw()
    {
        cout << "Money withdrawn" << endl;
    }
};
// User only sees withdraw operation, not internal process.