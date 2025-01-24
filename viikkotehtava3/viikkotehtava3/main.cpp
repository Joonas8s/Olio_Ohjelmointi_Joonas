#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Hans Valimaki");
    ItalianChef i_olio("Mario");

    int annoksiaSalad = c_olio.makeSalad(5);
    cout << "Annoksia: " << annoksiaSalad << endl;
    int annoksiaSoup = c_olio.makeSoup(6);
    cout << "Annoksia: " << annoksiaSoup << endl;
    i_olio.askSecret("pizza", 10, 10);


    return 0;
}
