#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int max);
    ~Game();
    void play();

private:
    void printGameResult();
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    int check;
};

#endif // GAME_H
