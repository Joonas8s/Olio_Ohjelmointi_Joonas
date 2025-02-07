#include "seuraaja.h"
#include <iostream>

using namespace std;

Seuraaja::Seuraaja(string n)
{
    name = n;
    cout << "Luodaan seuraaja " << name << endl;
}

void Seuraaja::paivitys(string viesti)
{
    cout << name << " sai viestin: " << viesti << endl;
}


string Seuraaja::getName() const
{
    return name;
}


