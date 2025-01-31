#include "luottotili.h"

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottotili luotu henkilolle " << o << ", luottoraja = " << luottoRaja << endl;
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Negatiivista talletusta ei voi suorittaa" << endl;
        return false;
    }

    else if(saldo < summa)
    {
        cout << "Yritit maksaa liikaa lainaa. Sinulla on lainaa: " << saldo
             << ", mutta yritit maksaa " << summa << endl;
        return false;
    }

    else
    {
        saldo = saldo - summa;
        cout << "Lainan takaisinmaksu onnistui summalla: " << summa << endl
             << "Velkaa jaljella: " << saldo
             << endl;

        return true;
    }
}

bool Luottotili::withdraw(double summa)
{
    cout << "Luottovelka ennen = " << luottoRaja << endl;

    if (summa < 0)
    {
        cout << "Nostettava summa ei voi olla negatiivinen";
        cout << "Luotto jalkeen = " << luottoRaja
             << " Summa = " << summa << endl;
        return false;
    }
    else if (summa > luottoRaja)
    {
        cout << "Luottoraja ei voi menna negatiiviseksi";
        cout << "Luottoraja jalkeen = " << luottoRaja
             << " Summa = "<< summa << endl;
        return false;
    }
    else
    {
        saldo = saldo + summa;
        cout << "Nostettu velkasumma = " << summa << endl
            << "Luottotilin saldo = " << saldo << endl
             << "Luottoa jaljella = " << luottoRaja - saldo << endl;
        return true;
    }
}
