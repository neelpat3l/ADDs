#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player  {
    public:
    Move* makeMove() override;
    Computer();
};

#endif