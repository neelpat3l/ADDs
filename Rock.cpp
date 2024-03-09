#include "Rock.h"
#include "Move.h"

#include <string>

using namespace std;

Rock::Rock(){
    move = "Rock";
}

string Rock::winner(Move* computerMove){
    if(computerMove->getName() == "Scissors"){
        return "winner";
    }
    else if(computerMove->getName() == "Rock"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}