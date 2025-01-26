#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>
#include "Chef.h"

using namespace std;

class ItalianChef: public Chef
{

private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int, int);
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
};

#endif // ITALIANCHEF_H
