#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

char userChoice();
char compChoice();
void showChoice(char choice);
void chooseWinner(char computer, char player);

int main()
{
    char player;
    char computer;

    player = userChoice();
    computer = compChoice();

    cout << "User's choice: ";
    showChoice(player);

    cout << "computer choice: ";
    showChoice(computer);

    chooseWinner(computer, player);
    return 0;
}

char userChoice()
{
    char player;

    do
    {
        cout << "Rock Paper Scissors Game\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissors\n";
        cout << "Select choice: ";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    // if condition is true -> repeat loop
    // if condition is false -> exit loop

    return player;
}

char compChoice()
{
    srand(time(NULL));
    int randomNum = (rand() % 3) + 1;

    switch (randomNum)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char computer, char player)
{
    if (computer == player)
        std::cout << "Game Tied!";
    else if (player == 'r' && computer == 's' || player == 'p' && computer == 'r' || player == 's' && computer == 'p')
        std::cout << "Player won";
    else
        std::cout << "Computer won";
}