#include "Paper.h"
#include "Move.h"

#include <string>

using namespace std;

Paper::Paper(){
    move = "Paper";
}

string Paper::winner(Move* computerMove){
    if(computerMove->getName() == "Scissors"){
        return "winner";
    }
    else if(computerMove->getName() == "Paper"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}