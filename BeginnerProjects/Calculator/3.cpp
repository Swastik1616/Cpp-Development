#include <iostream>
#include <string>
using namespace std;

void calculatorDisplay() {
    cout << "Welcome to Calculator" << endl;
    cout << "Choose one operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Exit" << endl;
}

// Function to take user input for two numbers and assign them to the given references
void user_input(int &a, int &b) {
    cout << "Provide two numbers, each on a separate line." << endl;
    cout << "Number 1 is: ";
    // Take input for the first number
    cin >> a;
    cout << "Number 2 is: ";
    // Take input for the second number
    cin >> b;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

string calculatorFunction(int user_choice) {
    int a, b;
    if (user_choice == 1) {
        user_input(a, b);
        int output = addition(a, b);
        return "The sum is: " + to_string(output);
    } else if (user_choice == 2) {
        user_input(a, b);
        int output = subtraction(a, b);
        return "The difference is: " + to_string(output);
    } else {
        return "Exit the program";
    }
}

int main() {
    calculatorDisplay();

    int user_choice;
    cout << "Select the operation: ";
    cin >> user_choice;

    string result = calculatorFunction(user_choice);
    cout << result << endl;

    return 0;
}
