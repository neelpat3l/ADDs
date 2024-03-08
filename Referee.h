#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Move.h"
#include "gamerules.h"

class Referee{
private:
    GameRules* gameRules;
public:
    Referee( ); // constructor
    Player * refGame(Player * player1, Player * player2);
};

#endif