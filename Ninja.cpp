#include "Ninja.h"
#include "Move.h"

#include <string>

using namespace std;

Ninja::Ninja(){
    move = "Ninja";
}

string Ninja::winner(Move* computerMove){
    if(computerMove->getName() == "Pirate"||computerMove->getName() == "Zombie"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Ninja"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}