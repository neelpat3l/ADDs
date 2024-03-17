#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

// This function reverses the digits of a given integer using recursion
int Reverser::reverseDigit(int number, int reversedNumber) {
    if (number < 0) {
        // Return -1 for negative numbers
        return -1; 
    } 
    else if (number == 0) {
        // When the input number becomes 0, return the reversed number
        return reversedNumber; 
    } 
    else {
        // Extract the last digit of the number and append it to the reversed number
        reversedNumber = reversedNumber * 10 + (number % 10);
        // Recur with the remaining digits of the number
        return reverseDigit(number / 10, reversedNumber);
    }
}

// This function reverses a given string using recursion
std::string Reverser::reverseString(std::string text) {
    if (text.empty()) {
        // Return "ERROR" if the input string is empty
        return "Error"; 
    }
    else {
        // Remove and append the first character from the string
        char firstChar = text.front(); 
        text.erase(0, 1); 
      
        return reverseString(text) + firstChar;
    }
}
