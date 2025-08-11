#include <iostream>
#include <string>
using namespace std;

// Function to display the calculator menu
string calculatorDisplay() {
    return "Welcome to Calculator\n\n"
           "Choose one operation:\n"
           "1. Add\n"
           "2. Subtract\n"
           "3. Exit\n";
}

// Function to get user input
void userInput(int &a, int &b) {
    cout << "Give two numbers on two lines" << endl;
    cout << "Number 1 is: ";
    cin >> a;
    cout << "Number 2 is: ";
    cin >> b;
}

// Function to perform addition
int addition(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtraction(int a, int b) {
    return a - b;
}

// Function to handle the calculator operations
string calculatorFunction(int userChoice) {
    if (userChoice == 1) {
        cout << "Let's perform addition" << endl;
        int a, b;
        userInput(a, b);
        int output = addition(a, b);
        return "The sum is: " + to_string(output);
    } else if (userChoice == 2) {
        cout << "Let's perform subtraction" << endl;
        int a, b;
        userInput(a, b);
        int output = subtraction(a, b);
        return "The difference is: " + to_string(output);
    } else {
        return "Exiting the calculator, bye bye!";
    }
}

int main() {
    while (true) {
        cout << calculatorDisplay();
        cout << "Select the operation: ";
        int userChoice;
        cin >> userChoice;

        string value = calculatorFunction(userChoice);
        cout << value << endl;

        // Update your code below this line
        if(userChoice == 3) break;
    }
    return 0;
}
