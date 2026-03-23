#include <iostream>
using namespace std;
// nested loop

int main()
{

    int rows;
    int columns;
    char symbol;

    cout << "Enter number of rows in rectangle: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k <= 2; k++)
    //     {
    //        cout << k << ' ';
    //     }
    //     cout << endl;
    // }
    return 0;
}