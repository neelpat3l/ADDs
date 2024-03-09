#include "Zombie.h"
#include "Move.h"

#include <string>

using namespace std;

Zombie::Zombie(){
    move = "Zombie";
}

string Zombie::winner(Move* computerMove){
    if(computerMove->getName() == "Pirate"||computerMove->getName() == "Monkey"){
        return "winner";
    }
    else if(computerMove->getName() == "Zombie"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}