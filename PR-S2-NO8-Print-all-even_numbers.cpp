//Write a program that prints all two-digit even numbers from highest to lowest.
// your answer should be like ==>       98  96  ... 4   2

#include<iostream>
using namespace std;

int main() {
    int number = 98;

    while(number >= 2) {
        cout << number << "\t";
        number = number - 2;
    }

}