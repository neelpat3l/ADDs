#include "Pirate.h"
#include "Move.h"

#include <string>

using namespace std;

Pirate::Pirate(){
    move = "Pirate";
}

string Pirate::winner(Move* computerMove){
    if(computerMove->getName() == "Robot"||computerMove->getName() == "Monkey"){
        return "winner";
    }
    else if(computerMove->getName() == "Pirate"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}