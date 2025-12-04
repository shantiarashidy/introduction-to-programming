//Write a program that receive a number and print it if its even 
//example       number = 10    ===>     10 is even
//example       number = 11    ===>     NOT even!

#include <iostream>
using namespace std;

int main(){
    int number;

    cout <<"Enter your number" << endl;
    cin >> number;

    if(number % 2 == 0)
        cout << number << " is even";
    
    else
        cout << "it is odd";
}