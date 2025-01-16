#include "game.h"
#include <iostream>

using namespace std;

int main()
{
    int maksimi;
    cout<<"Anna maksiminumero ";
    cin>>maksimi;
    Game game(maksimi);
    game.play();

    return 0;
}
