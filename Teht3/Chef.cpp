#include "Chef.h"

using namespace std;

Chef::Chef(string name) {
    this->chefName = name;
    cout<<endl<<this->chefName<<" construktor"<<endl;
}
Chef::~Chef(){
    cout<<this->chefName<<" destruktor"<<endl;
}

string Chef::getName(){
    return this->chefName;
}

int Chef::makeSalad(int ingredient){
    int count = ingredient / 5;
    if(count < 1){
        cout<<"Not enough ingredients"<<endl;
        return 0;
    }
    else{
        cout<<this->chefName<<" with ";
        cout<<ingredient<<" can make "<<count<<" portions of salad"<<endl;
        return count;
    }
}

int Chef::makeSoup(int ingredient){
    int count = ingredient / 3;
    if(count < 1){
        cout<<"Not enough ingredients"<<endl;
        return 0;
    }
    else{
        cout<<this->chefName<<" with ";
        cout<<ingredient<<" can make "<<count<<" portions of soup"<<endl;
        return count;
    }
}

