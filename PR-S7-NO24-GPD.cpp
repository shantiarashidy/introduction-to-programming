// Write a program that receives the final semester grades of each of the courses for 10 students,
// along with the number of credits in that course,
// and calculates the GPA for each.

#include <iostream>
using namespace std;

int main() {
    int smartCount = 0;   // Students with GPA >= 17
    int weakCount = 0;    // Students with GPA < 12

    for (int student = 1; student <= 10; student++) {
        float grade, weightedSum = 0, gpa;
        int courseCount, credit, creditSum = 0;

        cout << "Number of courses for student " << student << ": ";
        cin >> courseCount;

        for (int i = 1; i <= courseCount; i++) {
            cout << "Enter grade: ";
            cin >> grade;
            cout << "Enter credit: ";
            cin >> credit;

            weightedSum += grade * credit;
            creditSum += credit;
        }

        gpa = weightedSum / creditSum;

        if (gpa >= 17) {
            smartCount++;
        }
        if (gpa < 12) {
            weakCount++;
        }
    }

    cout << "Number of smart students: " << smartCount << endl;
    cout << "Number of weak students: " << weakCount << endl;

    return 0;
}
