//Write a program that displays all prime numbers between 50 and 500.

#include <iostream>
using namespace std;

int main() {
    int flag;

    cout << "Prime numbers between 50 and 500:" << endl;

    for (int x = 50; x <= 500; x++) {
        flag = 0;

        for (int i = 2; i <= x / 2; i++) {
            if (x % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << x << "\t";
        }
    }

    return 0;
}
