#include <iostream>
using namespace std;
// Quiz game

int main()
{
    std::string questions[3] = {
        "1. What is the capital of India?",
        "2. The date 26/11 realtes to which city?",
        "3. Which is the least per capita income state?"};

    int questionsSize = sizeof(questions) / sizeof(std::string);
    cout << questionsSize << endl;

    std::string options[][3] = {
        {"A. Mumbai", "B. Kolkata", "C. Delhi"},
        {"A. Mumbai", "B. Delhi", "C. Rajasthan"},
        {"A. Uttarpradesh", "B. Bihar", "C. Assam"}};

    char answers[] = {'C', 'A', 'B'};

    int optionsRows = sizeof(options) / sizeof(options[0]);
    int optionsColumns = sizeof(options[0]) / sizeof(options[0][0]);

    // std::cout << optionsRows << endl;
    // std::cout << optionsColumns << endl;

    char guess;
    int score = 0;

    std::cout << "***** QUIZ GAME *****\n";
    std::cout << '\n';

    for (int i = 0; i < questionsSize; i++)
    {
        std::cout << "*********************\n";
        std::cout << questions[i] << endl;
        std::cout << "*********************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answers[i])
        {
            std::cout << "Correct!\n";
            score++;
        }
        else
        {
            std::cout << "Incorrect\n";
        }
    }

    std::cout << "*********************\n";
    std::cout << "Your score: " << score;
    std::cout << "*********************\n";

    return 0;
}