#ifndef GAMERULES_H
#define GAMERULES_H

#include "Move.h"
#include "gamecommon.h"

class GameRules {
public:
    virtual GameResult decideWinner(Move* move1, Move* move2) const = 0;
    virtual ~GameRules() {}
};

class TraditionalRules : public GameRules {
public:
    GameResult decideWinner(Move* move1, Move* move2) const override {
        if (move1->getType() == move2->getType())
            return GameResult::Tie;
        if ((move1->getType() == "Rock" && move2->getType() == "Scissors") ||
            (move1->getType() == "Scissors" && move2->getType() == "Paper") ||
            (move1->getType() == "Paper" && move2->getType() == "Rock") ||
            (move1->getType() == "Monkey" && move2->getType() == "Ninja") ||
            (move1->getType() == "Monkey" && move2->getType() == "Robot") ||
            (move1->getType() == "Robot" && move2->getType() == "Ninja") ||
            (move1->getType() == "Robot" && move2->getType() == "Zombie") ||
            (move1->getType() == "Pirate" && move2->getType() == "Robot") ||
            (move1->getType() == "Pirate" && move2->getType() == "Monkey") ||
            (move1->getType() == "Ninja" && move2->getType() == "Pirate") ||
            (move1->getType() == "Ninja" && move2->getType() == "Zombie") ||
            (move1->getType() == "Zombie" && move2->getType() == "Pirate") ||
            (move1->getType() == "Zombie" && move2->getType() == "Monkey") 
        )
            return GameResult::Player1Wins;
        return GameResult::Player2Wins;
    }
};

#endif
