/*
Write a program that works like a simple calculator using a switch-case statement.
The program must first read an operator from the user, then:
- If the operator is one of +, -, *, / : read two integer operands and perform the operation.
- If the operator is ! : read one integer operand and compute its factorial.

Example:
Input:
Operator: /
Operands: 7 2

Output:
Result: 3.5
*/

#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "Operator (+, -, *, /, !): ";
    cin >> op;

    switch (op)
    {
    case '+':
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << (a + b) << "\n";
        break;

    case '-':
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << (a - b) << "\n";
        break;

    case '*':
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << (a * b) << "\n";
        break;

    case '/':
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;

        if (b == 0)
        {
            cout << "Error: division by zero!\n";
        }
        else
        {
            float result = (float)a / (float)b;
            cout << "Result: " << result << "\n";
        }
        break;

    case '!':
        int n;
        cout << "Enter one integer ( >= 0): ";
        cin >> n;

        if (n < 0)
        {
            cout << "Error: factorial is not defined for negative numbers.\n";
        }
        else
        {
            int res = 1;
            for (int i = 2; i <= n; i++)
            {
                res *= i;
            }
            cout << "Result: " << res << "\n";
        }
        break;
    default:
        cout << "Error: invalid operator.\n";
    }
}
