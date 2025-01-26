#include "Chef.h"
#include "Italianchef.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    string name;
    cout<<"Give the name of the chef ";
    cin>>name;
    Chef chef1(name);

    int ingredients;
    cout<<endl<<"Give the amount of ingredients ";
    cin>>ingredients;
    chef1.makeSalad(ingredients);
    cout<<"Give the amount of ingredients ";
    cin>>ingredients;
    chef1.makeSoup(ingredients);

    string password;
    int ingredient1, ingredient2;
    cout<<"Give the name of the Italian Chef ";
    cin>>name;
    ItalianChef chef2(name);
    cout<<endl<<"Give the amount of ingredients ";
    cin>>ingredients;
    chef2.makeSalad(ingredients);
    cout<<endl<<"Give the amount of ingredients "<<endl;
    cin>>ingredients;
    chef2.makeSoup(ingredients);
    cout<<"What is the password ";
    cin>>password;
    cout<<endl<<"How much flour ";
    cin>>ingredient1;
    cout<<endl<<"How much water ";
    cin>>ingredient2;
    chef2.askSecret(password, ingredient1, ingredient2);

    return 0;
}
