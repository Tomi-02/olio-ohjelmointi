#include "Pankkitili.h"
#include <string>
#include <iostream>

using namespace std;

Pankkitili::Pankkitili(string nimi) {
    this->omistaja = nimi;
    cout<<"Luotu tili kayttajalle "<<this->omistaja<<endl;
}

double Pankkitili::getBalance(){
    return this->saldo;
}

bool Pankkitili::deposit(double maara)
{
    if(maara>this->saldo&&maara<10000){
        this->saldo=this->saldo+maara;
        cout<<"Talletettu "<<" kayttajalle "<<this->omistaja<<endl;
        return true;
    }
    else if(maara>10000){
        cout<<"Syota pienempi numero kuin"<<saldo<<endl;
        return false;
    }
    else{
        cout<<"Syota suurempi numero kuin"<<saldo<<endl;
        return false;
    }
    return false;
}

bool Pankkitili::withdraw(double maara)
{
    if(this->saldo-maara>0){
        this->saldo=this->saldo-maara;
        cout<<"Nostettu "<<maara<<" Kayttajalle "<<this->omistaja<<endl;
        return true;
    }
    else{
        cout<<"Ei tarpeeksi rahaa"<<endl;
        return false;
    }
    return false;
}
