#include "Italianchef.h"
#include <iostream>
#include <string>

ItalianChef::ItalianChef(string name): Chef(name) {
    this->chefName= name;
}

ItalianChef::~ItalianChef(){
    cout<<"destruktori"<<endl;
}

bool ItalianChef::askSecret(string password, int ingredient1, int ingredient2){
    if(password != this->password){
        cout<<"Wrong password"<<endl;
        return false;
    }
    else{
        this->makepizza(ingredient1, ingredient2);
        return true;
    }
}

int ItalianChef::makepizza(int ingredient1, int ingredient2){
    int count1 = ingredient1 / 5;
    int count2 = ingredient2 / 5;
    if(count1 < 1){
        cout<<"not enough ingredients"<<endl;
        return 0;
    }
    if(count2 < 1){
        cout<<"not enough ingredients"<<endl;
        return 0;
    }
    if(count1<count2){
        cout<<this->chefName;
        cout<<" can make "<<count1<<" pizzas"<<endl;
        return count1;
    }
    if(count1>count2){
        cout<<this->chefName;
        cout<<" can make "<<count2<<" pizzas"<<endl;
        return count2;
    }
    if(count1==count2){
        cout<<this->chefName;
        cout<<" can make "<<count1<<" pizzas"<<endl;
        return count1;
    }
    return 0;
}
