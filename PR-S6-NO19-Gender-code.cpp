//Write a program that receives the gender code and student number of a number of students and prints the last male student number at the end.
// The gender code for females is the character f and for males is the character m. The program ends when the user enters the student number 0. (Using break)

#include <iostream>
using namespace std;

int main() {
    int studentCode = 0;
    int lastMale = 0;
    char gender;

    cout << "Enter student number and gender (m/f)." << endl;
    cout << "Enter 0 as student number to finish." << endl;

    while (true) {
        cout << "Student number: ";
        cin >> studentCode;

        if (studentCode == 0) {
            break;
        }

        cout << "Gender (m/f): ";
        cin >> gender;

        if (gender == 'm') {
            lastMale = studentCode;
        }
    }

    if (lastMale != 0) {
        cout << "Last male student number: " << lastMale << endl;
    } else {
        cout << "No male students entered." << endl;
    }

    return 0;
}
