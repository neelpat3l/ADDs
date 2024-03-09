#include "Zombie.h"
#include "Move.h"

#include <string>

using namespace std;

Zombie::Zombie(){
    move = "Zombie";
}

string Zombie::winner(Move* computerMove){
    if(computerMove->getName() == "Pirate"||computerMove->getName() == "Monkey"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Zombie"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}