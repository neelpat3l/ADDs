#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move{
    public: 
        Robot();
        string winner(Move* computerMove);
};
#endif 