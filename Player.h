#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

#include<iostream>
#include<string>

using namespace std;

class Player{
    protected:
        string name;
    public:
        Player();
        virtual Move* makeMove()=0;
        string getName();
};

#endif 