//write a calculator that can calculate + , - , / , * of two number

#include <iostream>
using namespace std;

int main() {
    float num1 , num2;
    char op;

    cout << "Enter number 1" << endl;
    cin >> num1;

    cout << "Enter number 2" << endl;
    cin >> num2;

    cout <<"Chose from + , - , / , * " << endl;
    cin >> op;

    if (op == '+')
        cout << "num1 + num2 is :" << num1 + num2;

    if (op == '-')
        cout << "num1 - num2 is :" << num1 - num2;

    if (op == '/')
        cout << "num1 / num2 is :" << num1 / num2;

    if (op == '*')
        cout << "num1 * num2 is :" << num1 * num2;

}