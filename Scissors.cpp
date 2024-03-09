#include "Scissors.h"
#include "Move.h"

#include <string>

using namespace std;

Scissors::Scissors(){
    move = "Scissors";
}

string Scissors::winner(Move* computerMove){
    if(computerMove->getName() == "Paper"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Scissors"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}