#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;

public:
    // Default constructor
    Player(const std::string & name = "Human"); 
    // Pure virtual function
    virtual char makeMove() = 0; 
    std::string getName();
};

#endif
