#include "Asiakas.h"
#include "Pankkitili.h"

Asiakas::Asiakas(string nimi, double luottoraja) {

    this->kayttotili = new Pankkitili(nimi);
    this->luottotili = new Luottotili(nimi, luottoraja);
    cout<<endl;

}

string Asiakas::getNimi()
{
    return this ->nimi;
}

void Asiakas::showSaldo()
{
    cout<<endl<<"Kayttajan "<<this->nimi<<" saldo"<<endl;
    cout<<"Pankkitili: "<<this->kayttotili->getBalance()<<endl;
}

bool Asiakas::talletus(double maara)
{
    return this->kayttotili->deposit(maara);
}

bool Asiakas::nosto(double maara)
{
    return this->kayttotili->withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara)
{
    return this->luottotili->deposit(maara);
}

bool Asiakas::luotonNosto(double maara)
{
    return this->luottotili->withdraw(maara);
}
