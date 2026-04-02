#include <iostream>
#include <ctime>
using namespace std;
// Tic tac toe game

/*
When we pass an array to a pointer it decays into a pointer
*/

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{

    srand(time(NULL));

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    std::cout << "THANKS FOR PLAYING!\n";
    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << '\n';
    std::cout << "     |     |     " << endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    std::cout << "_____|_____|_____" << endl;
    std::cout << "     |     |     " << endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    std::cout << "_____|_____|_____" << endl;
    std::cout << "     |     |     " << endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    std::cout << "     |     |     " << endl;
    std::cout << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
    } while (number < 0 || number > 8 || spaces[number] != ' ');
    // jab tak user galat input de rha hai, tab tak loop repeat hoga.
}

void computerMove(char *spaces, char computer)
{
    int number;

    while (true)
    {
        number = rand() % 9; // random number bw 0 - 8
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer)
{
    // Rows
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        std::cout << (spaces[3] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        std::cout << (spaces[6] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }

    // Columns
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        std::cout << (spaces[1] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        std::cout << (spaces[2] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }

    // Diagonals
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        std::cout << (spaces[2] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else
    {
        return false;
    }

    return true;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if(spaces[i] == ' '){
            return false;
        }
    }

    std::cout << "IT'S A TIE!\n";
    return true;
}
