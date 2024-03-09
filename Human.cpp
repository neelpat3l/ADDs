#include<iostream>

#include "Human.h"
#include "Player.h"
#include "Move.h"
#include "moveMaker.h"

using namespace std;

Human::Human(){
    name="Human";
}

Human::Human(string playerName){
    name=playerName;
}

string Human::getName(){
    return this->name;
};
Move* Human::makeMove(){
    string playerChoice;
    cin >> playerChoice;
    moveMaker temp;
    Move* playerMove = temp.createMove(playerChoice);
    return playerMove;
};