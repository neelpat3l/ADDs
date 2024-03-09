#include<iostream>
#include<string>

#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include "Move.h"

using namespace std;

Referee::Referee(){

}

Player*Referee::refGame(Player * player1, Player * player2){
    Move* player1Move = player1->makeMove();
    Move* player2Move = player2->makeMove();
    string checkWinner = player1Move->winner(player2Move);        
    if ( checkWinner == "winner" )
    {
        return player1;
    }
    else if(checkWinner == "tie"){
        cout<<"Tie"<<endl;
        return NULL;
    }
    
    else{
        return player2;
    }
    
};