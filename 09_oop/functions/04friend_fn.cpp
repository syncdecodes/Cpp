#include <iostream>
using namespace std;

// Friend function can access private members.

class Box
{
private:
    int value = 10;

    friend void display(Box b);
};

void display(Box b)
{
    cout << b.value;
}

int main()
{
    Box b;
    display(b);
    return 0;
}