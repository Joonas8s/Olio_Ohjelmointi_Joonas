#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    int guesses;
    int guess;
    srand(time(NULL));
    int randomnum = rand() % maxnum;
    int check = 0;
        cout << "Guess a number from 1-" << maxnum << endl;

    while(check == 0)
    {
        guesses++;
        cin >> guess;

        if(guess > randomnum)
        {
            cout << "Number is lower" << endl;
        }
        else if(guess < randomnum)
        {
            cout << "Number is higher" << endl;
        }
        else
        {
            cout << "CORRECT NUMBER" << endl << "Amount of guesses: " << guesses << endl;;
            check = 1;
        }
    }
    return 0;
}
int main()
{
    int number;
    cout << "Give me a number: " << endl;
    cin >> number;
    game(number);
}

