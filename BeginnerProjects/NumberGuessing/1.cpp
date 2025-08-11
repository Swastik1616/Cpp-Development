
#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    static bool seed_initialized = false; // Ensure seed is initialized only once
    if (!seed_initialized) {
        std::srand(std::time(0));
        seed_initialized = true;
    }

    int min = 1;
    int max = 100;

    // Generate random number in the range [1, 100]
    int rand_number ;
    rand_number = (rand() % (max-min+1)) + min;
    return rand_number;
}

int main() {
    // Generate and print random number
    std::cout << "Random Number: " << getRandomNumber() << std::endl;
    
    return 0;
}