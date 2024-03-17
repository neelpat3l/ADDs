#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {

public:
    // This function reverses the digits of an integer
    int reverseDigit(int number, int reversedNumber = 0);
    // This function reverses a string
    std::string reverseString(std::string text);
};

#endif
