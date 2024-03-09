#include "Scissors.h"
#include "Move.h"

#include <string>

using namespace std;

Scissors::Scissors(){
    move = "Scissors";
}

string Scissors::winner(Move* computerMove){
    if(computerMove->getName() == "Paper"){
        return "winner";
    }
    else if(computerMove->getName() == "Scissors"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}