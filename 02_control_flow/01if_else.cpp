#include <iostream>
using namespace std;
// if else statements

int main()
{

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can drive";
    }
    else if (age >= 16){
        cout << "You are egligable to apply for driving licence but you can't drive";
    }
    else
    {
        cout << "You can't drive";
    }

    return 0;
}