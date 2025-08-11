#include <iostream>
#include <string>
using namespace std;

// Function to display the calculator menu
string calculatorDisplay() {
    string display = "Welcome to Calculator\n\n"
                     "Choose one operation:\n"
                     "1. Add\n"
                     "2. Subtract\n"
                     "3. Exit\n";
    return display;
}

// Function to handle the user's choice
string calculatorFunction(int user_choice) {
    if(user_choice == 1)
    return "Let's initiate addition";
    else if (user_choice == 2)
    return "Let's initiate subtraction";
    else 
    return "Exit the program";
}

int main() {
    // Display the calculator menu
    cout << calculatorDisplay();

    // Take user input
    int user_choice;
    cout << "Select the operation: ";
    cin >> user_choice;

    // Process the user's choice
    string value = calculatorFunction(user_choice);
    cout << value << endl;

    return 0;
}
