// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April 2022
// This is a guess the number game

#include <iostream>
#include <iomanip>
#include <random>

int main() {
    // Declaring variables

    int someRandomNumber;
    int userInt;
    std::string userInput;

    // Generating the random number
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    someRandomNumber = idist(rgen);

    // Greeting message
    std::cout << "This is a number guessing game.\n";

    while (true) {
    // input
    std::cout << "Enter a number between 0 and 9 : ";
    std::cin >> userInput;
    try {
       // Casting to int
       userInt = std::stoi(userInput);

    // Checking number and printing output
    if (userInt == someRandomNumber) {
    std::cout << "You guessed correctly!\n";
    break;
} else {
    std::cout << "You guessed wrong :(\n";
    continue;
}} catch (std::invalid_argument) {
      // The user did not enter a number
      std::cout << "Invalid input.\n";
      continue;
}
    }}

