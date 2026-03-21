#include <iostream>
using namespace std;
// ternary operator

int main()
{
    // int grade;
    // cout << "Enter your grade out of 100: ";
    // cin >> grade;

    // grade >= 33 ? cout << "You passed" : cout << "You failed";

    int num;
    cout << "Enter a number: ";
    cin >> num;

    num % 2 == 1 ? cout << "ODD" << endl : cout << "EVEN" << endl;
    cout << (num % 2 == 1 ? "Entered number is ODD" : "Entered number is EVEN");
    return 0;
}