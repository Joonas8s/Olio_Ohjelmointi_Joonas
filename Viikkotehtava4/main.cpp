#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"


using namespace std;

int main()
{

    Asiakas A("Aapeli", 1000);
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.talletus(250);
    cout << endl;
    A.luotonNosto(150);
    cout << endl;
    A.showSaldo();
    cout << endl;
    cout << endl;

    Asiakas B("Bertta", 1000);
    cout << endl;
    B.showSaldo();
    cout << endl;
    cout << endl;

    cout << A.getNimi() << endl;
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.tiliSiirto(50, B);
    cout << endl;
    cout << endl;

    cout << B.getNimi() << endl;
    B.showSaldo();

    return 0;
}
