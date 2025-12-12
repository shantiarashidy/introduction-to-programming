//Write a program that simulates a 10×10 rectangle. With *

#include <iostream>
using namespace std;

int main() {
    cout << "10 x 10 Rectangle:" << endl << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
