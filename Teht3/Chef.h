#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>

using namespace std;

class Chef
{
protected:
    string chefName;

public:
    Chef(string);
    ~Chef();
    string getName(void);
    int makeSalad(int);
    int makeSoup(int);
};

#endif // CHEF_H
