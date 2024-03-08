#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Forward declaration of Move class
class Move;

class Player {
protected:
    std::string name;

public:
    // Default constructor
    Player(const std::string& name = "Human");
    // Pure virtual function
    virtual Move* makeMove() = 0;
    std::string getName();
};

#endif
