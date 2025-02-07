#include "notifikaattori.h"
#include <iostream>


using namespace std;

Notifikaattori::Notifikaattori()
{

}

void Notifikaattori::lisaa(Seuraaja *lisattySeuraajat)
{
    lisattySeuraajat->next = seuraajat;
    seuraajat = lisattySeuraajat;
    cout << "\nListaan lisatty seuraaja: " << lisattySeuraajat->getName();

}

void Notifikaattori::poista(Seuraaja *poistettuSeuraajat)
{
    Seuraaja *alku = seuraajat;
    while (alku->next != nullptr)
    {
        if (alku->next == poistettuSeuraajat)
        {
            alku->next = poistettuSeuraajat->next;
            cout << "Poistettu seuraaja: " << poistettuSeuraajat->getName() << endl;
        }
        else
        {
            alku = alku -> next;
        }
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku != nullptr)
        {
        cout << "Listassa: " << alku->getName() << endl;
            alku = alku ->next;
        }
        else
        {
            cout << "Lista loppui" << endl;
        }
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << "Listassa nyt: " << alku->getName() << endl;
        alku->paivitys(viesti);
        alku = alku->next;

        if (alku != nullptr)
        {
            cout << "Listassa seuraava: " << alku->getName() << endl;
        }

        else
        {
            cout << "Lista loppui" << endl;
        }
    }
}
