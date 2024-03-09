#include "Monkey.h"
#include "Move.h"

#include <string>

using namespace std;

Monkey::Monkey(){
    move = "Monkey";
}

string Monkey::winner(Move* computerMove){
    if(computerMove->getName() == "Ninja"||computerMove->getName() == "Robot"){
        return "Winner.";
    }
    else if(computerMove->getName() == "Monkey"){
        return "Tie!";
    }
    else{ 
        return "Loser.";
    }
}