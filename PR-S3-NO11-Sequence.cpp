//Write a program that finds the sum of the sequence (one + one-half + one-third + ... + one-thousandth).

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    for (int i = 1; i <= 1000; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
