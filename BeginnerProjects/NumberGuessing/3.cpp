#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    return rand() % 100 + 1;
}

std::string giveHint(int number, int guess) {
    if (guess > (number + 10) || guess < (number - 10)) {
        return "Cold";
    } else if (number == guess) {
        return "Right";
    } else {
        return "Hot";
    }
}

// update the function 
void runGuess() {
    int secretNumber = getRandomNumber();
    int user_guess;
    std::string hint;

    while(user_guess!=secretNumber){
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> user_guess;
        hint = giveHint(secretNumber, user_guess);
        
        if (hint == "Right") {
            std::cout << "You guessed it Right!" << std::endl;
            break;

        } else {
            std::cout << hint << std::endl;
        }
    }
}

int main() {
    srand(time(0));  // Initialize random seed
    runGuess();
    return 0;
}
