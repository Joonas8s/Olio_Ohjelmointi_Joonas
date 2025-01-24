#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori" << endl;
}

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    chefName = name;
    cout << "ItalianChef konstruktori, kokin nimi: " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if (password.compare(pw) == 0)
    {
        cout << "Salasana oikein!" << endl;
        flour = f;
        water = w;
        int annoksiaPizza = makePizza();
        cout << "Pizzoja tuli: " << annoksiaPizza << endl;

        return true;
    }
    else
    {
        cout << "Salasana vaarin!" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int annoksia = 0;
    int wf = min(flour, water);
    annoksia = wf/5;
    cout << "Jauhoja: " << flour << endl << "Vetta: " << water << endl;

    return annoksia;
}

