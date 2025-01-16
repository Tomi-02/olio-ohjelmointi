#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Game::Game(int maksimi){
    srand(time(NULL));
    Game::numOfGuesses = 1;
    Game::randomNumber = rand()% maksimi;
    Game::maxNumber = maksimi;

}

Game::~Game(){

}

void Game::printGameResult() {
    cout<<"Oikea vastaus oli ";
    cout<<Game::randomNumber<<endl;
    cout<<"Arvausten maara oli ";
    cout<<Game::numOfGuesses<<endl;
}

void Game::play() {
    cout<<"Arvaa numero 0 ja ";
    cout<<Game::maxNumber;
    cout<<" Valilta"<<endl;
    cin>>Game::playerGuess;

    while(playerGuess!=randomNumber){

        if(playerGuess<randomNumber){
            cout<<"Liian pieni"<<endl;
        }
        if(playerGuess>randomNumber){
            cout<<"Liian iso"<<endl;
        }
        Game::numOfGuesses++;
        cout<<"Arvaa uudestaan"<<endl;
        cin>>playerGuess;
    }
    Game::printGameResult();
}
