#include "Seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string uusiNimi) {
    this->nimi=uusiNimi;
}

Seuraaja::~Seuraaja(){
    cout<<this->getNimi()<<" poistettu"<<endl;
}

string Seuraaja::getNimi()
{
    return this->nimi;
}

void Seuraaja::paivitys(string teksti)
{
    cout<<"Seuraaja "<<this->getNimi()<<" saa viestin ";
    cout<<teksti<<endl;

}
