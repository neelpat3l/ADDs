#ifndef MOVE_H
#define MOVE_H

#include<iostream>
#include<string>

using namespace std;
class Move{
    protected:
        string move;
    public:
        Move();
        virtual string winner(Move* computerMove)=0;
        string getName();
};

#endif 