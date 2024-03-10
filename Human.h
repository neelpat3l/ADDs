#ifndef HUMAN_H
#define HUMAN_H

#include<iostream>

#include "Player.h"
#include "Move.h"
#include "moveSelector.h"

using namespace std;

class Human : public Player{
    public:
        Human();
        Human(string name);
        string getName(); 
        Move* makeMove();
};
#endif 