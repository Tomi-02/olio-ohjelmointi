#include "Luottotili.h"
#include "Pankkitili.h"

Luottotili::Luottotili(string omistaja, double luottoRaja) : Pankkitili(omistaja) {
    this->luottoRaja = luottoRaja;
    cout<<"Luottotilin "<<"Raja "<<this->luottoRaja<<endl;
}

bool Luottotili::deposit(double maara)
{
    if(maara>0&&maara<10000){
        this->saldo=this->saldo+maara;
        cout<<"Talletettu "<<maara<<" Kayttajalle "<<this->omistaja<<endl;
        return true;
    }
    else if(maara>10000){
        cout<<"Syota pienempi summa kuin "<<saldo<<endl;
        return false;
    }
    else{
        cout<<"Syota suurempi summa kuin "<<saldo<<endl;
        return false;
    }
    return false;
}

bool Luottotili::withdraw(double maara)
{
    if(this->saldo-maara>0-this->luottoRaja){
        this->saldo=this->saldo-maara;
        cout<<"Nostettu "<<maara<<" Luottotililta "<<"kayttajalle "<<this->omistaja<<endl;
        return true;
    }
    else{
        cout<<"Ei tarpeeksi rahaa"<<endl;
        return false;
    }
    return false;
}
