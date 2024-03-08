#include "Human.h"
#include <iostream>
//Constructor
Human::Human(const std::string& name) : Player(name) {}
//Prompt the input message to the human player
Move* Human::makeMove() {
    char move;
    std::cout << "Enter move(Rock, Paper, Scissors, Robot, Monkey, Pirate, Ninja, Zombie): ";
    std::cin >> move;
    return nullptr;
}
