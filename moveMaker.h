#ifndef MOVEMAKER_H
#define MOVEMAKER_H

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"

class moveMaker{
    public:
        Move* createMove(string move);
};
#endif
