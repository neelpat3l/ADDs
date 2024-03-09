#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

Player::Player(){
    name = "Human";
}

string Player::getName(){
    return this->name;
}
