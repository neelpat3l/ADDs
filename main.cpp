#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create players
    Human player1("Human");
    Computer player2;

    // Create referee
    Referee referee;

    // Play the game
    Player* winner = referee.refGame(&player1, &player2);

    if (winner != nullptr) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    }

    return 0;
}
