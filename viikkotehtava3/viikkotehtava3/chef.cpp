#include "chef.h"
#include <iostream>

Chef::Chef()
{
    cout << "Chef defaultkonstruktori, ei nimeä" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi " << chefName << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori" << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annoksia = 0;
    annoksia = aines/5;
    cout << "Salaattiaineksia " << aines << endl;

    return annoksia;
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    annoksia = aines/3;
    cout << "Keittoaineksia " << aines << endl;

    return annoksia;
}


