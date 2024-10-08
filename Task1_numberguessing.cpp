#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Function to handle the guessing game
void playGuessingGame(int randomNumber) {
    int userGuess;

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Check if the guess is too high, too low, or correct
        if (userGuess > randomNumber) {
            std::cout << "Your guess is too high. Try again.\n";
        } else if (userGuess < randomNumber) {
            std::cout << "Your guess is too low. Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break; // Exit the loop since the correct number is guessed
        }
    }
}

int main() {
    // Use current time as seed for random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    std::cout << "I have chosen a number between 1 and 100. Try to guess it!\n";

    // Call the function to start the game
    playGuessingGame(randomNumber);

    return 0;
}