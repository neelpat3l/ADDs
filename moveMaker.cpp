#include "moveMaker.h"

Move* moveMaker::createMove(string move) {
    Move*chosenMove;
    if(move=="Zombie"){
        chosenMove = new Zombie();
    }
    else if(move == "Scissors"){
        chosenMove = new Scissors;
    }   
    else if(move == "Robot"){
        chosenMove = new Robot();
    }
    else if(move == "Paper"){
        chosenMove = new Paper();
    }
    else if(move == "Pirate"){
        chosenMove = new Pirate();
    }
    else if(move == "Ninja"){
        chosenMove = new Ninja();
    }
    else if(move == "Monkey"){
        chosenMove = new Monkey();
    }
    else{
        chosenMove = new Rock();
    }
    return chosenMove;
}