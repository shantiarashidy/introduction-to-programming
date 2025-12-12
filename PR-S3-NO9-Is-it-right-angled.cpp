//Write a program that receives the sides of a triangle from the user
//and checks whether the triangle is right-angled or not. (It should also detect the hypotenuse.)

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "These sides do not form a valid triangle." << endl;
        return 0;
    }

    double hyp = 0, x = 0, y = 0;

    if (a >= b && a >= c) {
        hyp = a;
        x = b;
        y = c;
    } else if (b >= a && b >= c) {
        hyp = b;
        x = a;
        y = c;
    } else {
        hyp = c;
        x = a;
        y = b;
    }

    if (hyp * hyp == x * x + y * y) {
        cout << "This is a right-angled triangle." << endl;
        cout << "Hypotenuse: " << hyp << endl;
    } else {
        cout << "This is NOT a right-angled triangle." << endl;
    }

    return 0;
}
