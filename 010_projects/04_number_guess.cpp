#include <iostream>
using namespace std;
#include <ctime>
// number guessing game

int main()
{
    srand(time(NULL));

    int num;
    int tries = 3;
    int random_num = (rand() % 10) + 1;

    cout << "*********** Number Guessing Game ***********\n";

    while (tries > 0)
    {
        cout << "Enter number between 1 - 10: ";
        cin >> num;

        if (num == random_num)
        {
            cout << "Correct! The number was: " << random_num << endl;
            return 0;
        }

        tries--;

        if (tries > 0)
        {
            cout << "Incorrect! Tries left: " << tries << endl;
        }
    }

    cout << "You lost! Correct number is: " << random_num << endl;

    return 0;
}