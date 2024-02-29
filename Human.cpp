#include "Human.h"
#include <iostream>

Human::Human(const std::string& name) : Player(name) {}

char Human::makeMove() {
    char move;
    std::cout << "Enter move(R, P, S): ";
    std::cin >> move;
    return move;
}
