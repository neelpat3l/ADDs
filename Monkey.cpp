#include "Monkey.h"
#include "Move.h"

#include <string>

using namespace std;

Monkey::Monkey(){
    move = "Monkey";
}

string Monkey::winner(Move* computerMove){
    if(computerMove->getName() == "Ninja"||computerMove->getName() == "Robot"){
        return "winner";
    }
    else if(computerMove->getName() == "Monkey"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}