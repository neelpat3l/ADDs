#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move{
    public: 
        Paper();
        string winner(Move* computerMove);
};
#endif 