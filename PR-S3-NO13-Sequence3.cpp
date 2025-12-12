//Write a program that finds the sum of the sequence 
// (one-half + two-thirds + three-quarters + ... + nine hundred and ninety-nine thousandths).

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    for (int n = 1; n <= 999; n++) {
        sum += double(n) / (n + 1);
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
