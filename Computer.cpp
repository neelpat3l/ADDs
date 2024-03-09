#include<iostream>

#include "Player.h"
#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Move.h"

using namespace std;

string Computer::getName(){
    return name;
};
Move* Computer::makeMove(){
    Move* move = new Rock;
    return move;
};