#include <iostream>
#include <string>
#include "Asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("Testaaja1", 500);
    asiakas1.talletus(500);
    asiakas1.showSaldo();

    Asiakas asiakas2("Testaaja2", 1000);
    asiakas2.talletus(500);

    asiakas1.showSaldo();
    asiakas2.showSaldo();

}
