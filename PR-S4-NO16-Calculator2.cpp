//Write a program that simulates a calculator including multiplication, addition, division, subtraction, and remainder operations. 
//The calculator stops when the user enters a character other than the symbols related to the calculator's operations.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Simple Calculator (Enter any other character to exit)" << endl;

    while (true) {
        cout << "Enter first number, second number, and operator (+, -, *, /, %): ";
        cin >> num1 >> num2 >> op;

        if (op == '+') {
            cout << "Result: " << num1 + num2 << endl;
        } else if (op == '-') {
            cout << "Result: " << num1 - num2 << endl;
        } else if (op == '*') {
            cout << "Result: " << num1 * num2 << endl;
        } else if (op == '/') {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else if (op == '%') {
            if (num2 != 0) {
                cout << "Result: " << num1 % num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else {
            cout << "Exiting calculator." << endl;
            break;
        }
    }

    return 0;
}

