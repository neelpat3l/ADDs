#ifndef COMPUTER_H
#define COMPUTER_H

#include<iostream>

#include "Player.h"
#include "Move.h"

using namespace std;
class Computer : public Player{
    private:
        string computerName;
       string computerMove;
    public:
        Computer(){
            name="Computer";
        }
        string getName();
        Move* makeMove(); 
};

#endif 