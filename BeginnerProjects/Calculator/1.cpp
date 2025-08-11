#include <iostream>
#include <string>
using namespace std;

string calculatorDisplay() {
    string display ;
    display = "Welcome to Calculator\n\nChoose one operation:\n1. Add\n2. Subtract\n3. Exit\n";
    return display;
}

int main() {
    cout << calculatorDisplay();
    return 0;
}
