#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

Game::Game(int max) : maxNumber(max), check(0), numOfGuesses(0)
{
    cout << "GAME CONSTRUCTOR: Your maximum number is " << maxNumber << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: Game ends" << endl;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "Guess a number from 1 to " << maxNumber << ":" << endl;

    {
    while (check == 0)
    {
        numOfGuesses++;
        cin >> playerGuess;

        if (playerGuess > randomNumber)
        {
            cout << "Number is lower" << endl;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Number is higher" << endl;
        }
        else
        {
            printGameResult();
            check = 1;
        }
    }
}
}

void Game::printGameResult()
{
    cout << "CORRECT NUMBER!" << endl
         << "Amount of guesses: " << numOfGuesses << endl;
}
