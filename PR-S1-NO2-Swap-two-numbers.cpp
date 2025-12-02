// Write a program that gets two numbers and swap the value of them
// for example a = 2 , b = 4 ===> a = 4 , b = 2

#include <iostream>
using namespace std;

int main(){
    int a , b;
    int temp = 0;

    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    cout <<"Values of a and b before swaping them: " << a << " and " << b << endl;
    
    temp = a;
    a = b;
    b = temp;

    cout <<"Values of a and b after swaing : " << a << " and " << b;
}