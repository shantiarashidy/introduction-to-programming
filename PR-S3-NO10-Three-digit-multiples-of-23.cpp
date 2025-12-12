//WRITE a program that print Three-digit multiples of 23

#include <iostream>
using namespace std;

int main() {
    cout << "Three-digit multiples of 23:" << endl;

    for (int i = 100; i <= 999; i++) {
        if (i % 23 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
