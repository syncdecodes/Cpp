#include <iostream>
using namespace std;
// calculator

int main()
{
    char op;
    double num1;
    double num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter operator (+ - * / %): ";
    cin >> op;

    cout << "Enter number 2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "This was not a valid response";
    }
    return 0;
}