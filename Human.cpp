#include "Human.h"
#include <iostream>
//Constructor
Human::Human(const std::string& name) : Player(name) {}
//Prompt the input message to the human player
char Human::makeMove() {
    char move;
    std::cout << "Enter move(R, P, S): ";
    std::cin >> move;
    return move;
}
