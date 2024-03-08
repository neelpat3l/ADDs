#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
    public:
    virtual std::string getType() const = 0;
    virtual std::string getName() const = 0; 
    virtual ~Move() {}
};

class Rock : public Move {
    public:
    std::string getType() const override {return "Rock";}
    std::string getName() const override {return "Rock";}
};

class Paper : public Move {
    public:
    std::string getType() const override {return "Paper";}
    std::string getName() const override {return "Paper";}
};

class Scissors : public Move {
    public:
    std::string getType() const override {return "Scissors";}
    std::string getName() const override {return "Scissors";}
};

class Robot : public Move {
    public:
    std::string getType() const override {return "Robot";}
    std::string getName() const override {return "Robot";}
};

class Monkey : public Move {
    public:
    std::string getType() const override {return "Monkey";}
    std::string getName() const override {return "Monkey";}
};

class Pirate : public Move {
    public:
    std::string getType() const override {return "Pirate";}
    std::string getName() const override {return "Pirate";}
};

class Ninja : public Move {
    public:
    std::string getType() const override {return "Ninja";}
    std::string getName() const override {return "Ninja";}
};

class Zombie : public Move {
    public:
    std::string getType() const override {return "Zombie";}
    std::string getName() const override {return "Zombie";}
};

#endif