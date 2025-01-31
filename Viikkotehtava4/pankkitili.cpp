#include "pankkitili.h"
using namespace std;

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string nimi)
{
    cout << "Pankkitili luotu henkilolle " << nimi << endl;
    omistaja = nimi;
}

bool Pankkitili::withdraw(double summa)
{
    cout << "Saldo ennen = " << saldo << endl
         << "Nostettava summa = " << summa << endl;
    if (summa < 0)
    {
        cout << "Nostettava summa ei voi olla negatiivinen";
            cout << "Saldo jalkeen = " << saldo << " Summa = " << summa << endl;
        return false;
    }
    else if (summa > saldo)
    {
        cout << "Tililla ei ole tarpeeksi katetta" << endl;
        cout << "Saldo jalkeen = " << saldo << endl << " Summa = " << summa << endl;
        return false;
    }
    else
    {
        saldo = saldo - summa;
        cout << "Pankkitilin saldo jalkeen = " << saldo << endl;
        return true;
    }


}

bool Pankkitili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Negatiivista talletusta ei voi suorittaa" << endl;
        return false;
    }

    else
    {
        saldo = saldo + summa;
        cout << "Talletuksen summa tilille " << omistaja << " summalla " << summa << endl <<
            omistaja << " pankkitilin saldo talletuksen jalkeen = " << saldo << endl;
        return true;
    }
}

double Pankkitili::getSaldo() const
{
    return saldo;
}

