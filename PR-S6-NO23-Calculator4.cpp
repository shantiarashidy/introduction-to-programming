// Design a calculator using the "switch case" instruction that performs the 4 basic operations and factorial.


#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Calculator (+  -  *  /  ! )" << endl;
    cout << "Enter an operator: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2;
            break;

        case '-':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2;
            break;

        case '*':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2;
            break;

        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;

        case '!': {
            int n, fact = 1;
            cout << "Enter a number: ";
            cin >> n;

            if (n < 0) {
                cout << "Factorial undefined for negative numbers!";
            } else {
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                cout << "Factorial: " << fact;
            }
            break;
        }

        default:
            cout << "Invalid operator.";
    }

    return 0;
}
