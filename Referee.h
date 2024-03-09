#ifndef REFEREE_H
#define REFEREE_H

#include<iostream>

#include "Human.h"
#include "Player.h"
#include "Computer.h"

#include<string>

class Referee {
    public:
        Referee(); 
        Player*refGame(Player * player1, Player * player2);
};

#endif 