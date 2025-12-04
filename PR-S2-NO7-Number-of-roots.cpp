//Write a program that gets three coefficients of a secent degree equation and prints number of roots

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float delta;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    delta = b*b - 4*a*c;

    if (delta > 0)
        cout << "The equation has 2 real roots.";
    else if (delta == 0)
        cout << "The equation has 1 real root.";
    else
        cout << "The equation has no real roots.";

    return 0;
}
