#include "Referee.h"
#include "Move.h"
#include "gamerules.h"
#include "gamecommon.h"
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    GameResult result = gameRules->decideWinner(move1, move2);
    delete move1;
    delete move2;

  if (result == GameResult::Tie) {
    std::cout << "It's a Tie." << std::endl;
    return nullptr;
} else if (result == GameResult::Player1Wins) {
    std::cout << player1->getName() << " Wins." << std::endl;
    return player1;
} else if (result == GameResult::Player2Wins) {
    std::cout << player2->getName() << " Wins." << std::endl;
    return player2;
}

}
