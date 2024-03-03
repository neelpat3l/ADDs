#include "Referee.h"
#include <iostream>

Referee::Referee() {}
//Associate the move with player Player 1 as human and player 2 as computer completed in Main.cpp
Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();
// Print It's a Tie. when move 1 is the same as move 2 
    if (move1 == move2) {
        std::cout << "It's a Tie." << std::endl;
        return nullptr;
    }
// Compare the results of the moves
    if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') || (move1 == 'P' && move2 == 'R')) {
        std::cout << player1->getName() << " Wins." << std::endl;
        return player1;
    } else {
        std::cout << player2->getName() << " Wins." << std::endl;
        return player2;
    }
}
