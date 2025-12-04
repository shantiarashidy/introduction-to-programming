// Write a program that calculate the value of perimeter and area of ​​a rectangle.
//Note: check for values and calculate p and a only if num1 and num2 are positive
// example       num1 = 10 , num2 = 5      ===>       Area = 50 , perimeter = 30
// example       num1 = -5 , num2 = 10     ===>       Invalid values!!!

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int Area, Permiter;
    
    cout <<"enter first number : " << endl;
    cin >> num1;
    cout <<"enter second number : " << endl;
    cin >> num2;

    if(num1 > 0 && num2 > 0){
    Area = num1 * num2;
    Permiter = 2 * (num1 + num2);

    cout << "Area of rectangle is : " << Area << " and perimeter is : " << Permiter;
    }

    else{
        cout <<"Invalid values!!!";
    }
}