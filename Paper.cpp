#include "Paper.h"
#include "Move.h"

#include <string>

using namespace std;

Paper::Paper(){
    move = "Paper";
}

string Paper::winner(Move* computerMove){
    if(computerMove->getName() == "Scissors"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Paper"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}