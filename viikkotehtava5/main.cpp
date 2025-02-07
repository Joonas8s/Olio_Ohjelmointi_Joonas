#include "seuraaja.h"
#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori *N = new Notifikaattori();

    Seuraaja *A = new Seuraaja("Aapo Apina");
    Seuraaja *B = new Seuraaja("Bip Bop");
    Seuraaja *C = new Seuraaja("Cesar");

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("VIESTI 1");

    cout << endl;

    N->poista(B);

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("VIESTI 2");

    cout << endl;

    delete A;
    delete B;
    delete C;

    return 0;
}
