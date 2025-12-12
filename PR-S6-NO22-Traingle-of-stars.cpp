//Write a program that simulates a 10×10 triangle.
/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * *
* * * * * * * * * *

*/

#include <iostream>
using namespace std;

int main() {
    cout << "10 x 10 Triangle:" << endl << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
