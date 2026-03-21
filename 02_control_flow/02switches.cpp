#include <iostream>
using namespace std;
// switches

/* alternative to using many "else if" statements
   compare one value against matching cases */

int main()
{
    int month;
    cout << "Enter the month (1 - 6): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "Feb";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    default:
        cout << "Enter number only (1 - 6)";
    }

    return 0;
}