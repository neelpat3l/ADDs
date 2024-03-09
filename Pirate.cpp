#include "Pirate.h"
#include "Move.h"

#include <string>

using namespace std;

Pirate::Pirate(){
    move = "Pirate";
}

string Pirate::winner(Move* computerMove){
    if(computerMove->getName() == "Robot"||computerMove->getName() == "Monkey"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Pirate"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}