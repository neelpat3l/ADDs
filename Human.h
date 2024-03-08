#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    public:
    //Defualt Construtor
    Human(const std::string & name = "Human");
    //Override Pure Virtual funtion from player.h
    Move* makeMove() override;
};

#endif