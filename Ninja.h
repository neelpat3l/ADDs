#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move{
    public: 
        Ninja();
        string winner(Move* computerMove);
};
#endif 