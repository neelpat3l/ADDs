#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include "Computer.h"

#include <string>
#include <iostream>

using namespace std;

int main(){
    Human* human = new Human();
    Human* humanOther = new Human();
    Referee* referee = new Referee();
    //human->makeMove();
    //computer->makeMove();

    Player*winner = referee->refGame(human, humanOther);
    cout << winner->getName() << endl;
    return 0;
}