#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
int game(int maxnum);

using namespace std;

int main()
{
    int maxnum;
    cout<<"anna suurin numero"<<endl;
    cin>>maxnum;
    int counter = game(maxnum);
    cout<<"Arvausten maara on "<<counter<<endl;
    return 0;
}

int game(int maxnum){
    srand(time(NULL));
    int counter = 1;
    int input = 0;
    int rNumber = 0;
    rNumber = rand() % maxnum + 1;
    cout<<"Arvaa luku ";
    cout<<"1 ja "<<maxnum<<" valilta"<<endl;
    cin>>input;

    while(input!=rNumber){

        if(input<rNumber){
            cout<<"Liian pieni"<<endl;
        }
        if(input>rNumber){
            cout<<"Liian iso"<<endl;
        }
        counter++;
        cout<<"Anna uusi luku ";
        cout<<"1 ja "<<maxnum<<" valilta"<<endl;
        cin>>input;
    }
    cout<<"Oikein, peli lapi"<<endl;
    return counter;

}
