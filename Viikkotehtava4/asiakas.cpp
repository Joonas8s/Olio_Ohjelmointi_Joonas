#include "asiakas.h"


Asiakas::Asiakas(string nimi, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    cout << "Asiakkuus luotu henkilolle: " << nimi << endl;
    name = nimi;
}

bool Asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}

void Asiakas::showSaldo()
{
    cout << "Pankkitilin saldo: " << kayttotili.getSaldo()
         << endl << "Luottotilin saldo: " << luottotili.getSaldo() << endl;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto(summa);
        if(onnistuiko == false)
    {
        cout << "Ei tarpeeksi rahaa tililla" << endl;
    }
    else
    {
        cout << name << " siirtanyt rahaa: " << summa << endl;
        saaja.talletus(summa);
        return true;
    }
}

string Asiakas::getNimi() const
{
    return name;
}

