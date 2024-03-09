#include "Robot.h"
#include "Move.h"

#include <string>

using namespace std;

Robot::Robot(){
    move = "Robot";
}

string Robot::winner(Move* computerMove){
    if(computerMove->getName() == "Ninja"||computerMove->getName() == "Zombie"){
        return "winner";
    }
    else if(computerMove->getName() == "Robot"){
        return "tie";
    }
    else{ 
        return "loser";
    }
}