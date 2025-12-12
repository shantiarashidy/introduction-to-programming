// Write a program that displays all three-digit multiples of 5.

#include <iostream>
using namespace std;

int main() {
    cout << "Three-digit multiples of 5:" << endl;

    for (int i = 100; i <= 999; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}