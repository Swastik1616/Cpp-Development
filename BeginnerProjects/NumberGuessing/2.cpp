#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    return rand() % 100 + 1;  // Generate a random number between 1 and 100
}

// update the giveHint function
std::string giveHint(int number, int guess) {
    if((guess < number && guess >= number - 10) || (guess > number && guess <= number + 10))
    return "Hot";
    else if ( guess == number)
    return "Right";
    else
    return "Cold";
}

void runGuess() {
    int secretNumber = getRandomNumber();
    int userGuess;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> userGuess;

    std::string hint = giveHint(secretNumber, userGuess);
    if (hint == "Right") {
        std::cout << "You guessed it Right!" << std::endl;
    } else {
        std::cout << hint << std::endl;
    }
}

int main() {
    srand(time(0)); // Initialize the random seed
    runGuess();
    return 0;
}
