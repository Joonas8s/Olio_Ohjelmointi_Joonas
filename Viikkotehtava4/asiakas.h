#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string nimi, double lr);
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
    void showSaldo();
    bool tiliSiirto(double summa, Asiakas &saaja);


    string getNimi() const;

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string name;
};

#endif // ASIAKAS_H
