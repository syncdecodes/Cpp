#include <iostream>
using namespace std;

// Destructor destroys objects automatically when they go out of scope.

class Test {
    public:
    Test(){
        cout << "Constructor" << endl;
    }
    ~Test(){
        cout << "Destructor" << endl;
    }
};

int main()
{
    Test t;
    return 0;
}