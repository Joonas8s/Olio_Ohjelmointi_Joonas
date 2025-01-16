#include <iostream>
#include "game.h"

using namespace std;

int main(int maxNumber)
{
    cout << "Enter the maximum number for the game: ";
    cin >> maxNumber;

    Game play(maxNumber);
    play.play();
    return 0;
}
