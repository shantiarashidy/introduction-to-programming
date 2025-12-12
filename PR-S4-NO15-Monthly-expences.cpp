//Write a program that receives the monthly expenses of a family and 
//displays the max value along with the average expenses.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of monthly expenses: ";
    cin >> n;

    float expense, sum = 0, maxValue = 0;

    cout << "Enter the expenses:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> expense;
        sum += expense;
        if (expense > maxValue) {
            maxValue = expense;
        }
    }

    float average = sum / n;

    cout << "Maximum expense = " << maxValue << endl;
    cout << "Average expense = " << average << endl;

    return 0;
}
