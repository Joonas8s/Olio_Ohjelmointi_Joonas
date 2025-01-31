#include <iostream>
#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string nimi);
    virtual bool withdraw(double);
    virtual bool deposit(double);


    double getSaldo() const;

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
