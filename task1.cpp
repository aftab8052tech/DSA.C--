#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attemptCount = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Loop until the user guesses the correct number
    while (userGuess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        attemptCount++; // Increment the attempt counter

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
            std::cout << "It took you " << attemptCount << " attempts." << std::endl;
        }
    }

    return 0;
}
