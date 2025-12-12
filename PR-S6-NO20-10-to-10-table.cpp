//Write a program that simulates the 10×10 multiplication table.

#include <iostream>
using namespace std;

int main() {
    cout << "10 x 10 Multiplication Table:" << endl << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
