#include "Notifikaattori.h"
#include <iostream>
using namespace std;
#include <string>

Notifikaattori::Notifikaattori() {
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja * pointteri)
{
    if(this->seuraajat == nullptr){
        cout<<"Notifikaattori lisaa seuraajan "<<pointteri->getNimi()<<endl;
        this->seuraajat=pointteri;
    }
    else{
        cout<<"Notifikaattori lisaa seuraajan "<<pointteri->getNimi()<<endl;
        this->seuraajat=pointteri;
    }
}

void Notifikaattori::poista(Seuraaja * poistettava)
{
    Seuraaja * current = this->seuraajat;
    if(current != nullptr){
        cout<<"Ei seuraajia"<<endl;
        return;
    }
    while(current != nullptr){
        if(current->next == poistettava){
            cout<<"Notifikaattori poistaa seuraajan "<<current->next->getNimi()<<endl;
            current->next = current->next->next;
            return;
        }
        current = current->next;
    }
}

void Notifikaattori::tulosta()
{
    cout<<"Notifikaattorin seuraajat:"<<endl;
    Seuraaja * current = this->seuraajat;
    if(current == nullptr){
        cout<<"Ei seuraajia"<<endl;
        return;
    }
    while(current != nullptr){
        cout<<current->getNimi()<<endl;
        current = current->next;
    }
}

void Notifikaattori::postita(string teksti)
{
    cout<<"Notifikaattori postaa viestin "<<teksti<<endl;
    Seuraaja * current = this->seuraajat;
    if(current==nullptr){
        cout<<"Ei seuraajia"<<endl;
        return;
    }
    while(current != nullptr){
        current->paivitys(teksti);
        current = current->next;
    }
    cout<<endl;

}
