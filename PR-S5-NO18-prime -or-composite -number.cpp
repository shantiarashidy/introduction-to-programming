/*
This C++ program reads an integer number from the user and determines whether it is prime or not.
It uses a simple loop to test divisibility of the number from 2 up to n/2.
A flag variable is used:
- flag = 1  => the number is prime
- flag = 0  => the number is not prime (composite or n <= 1)

Example:
Input:  13
Output: 13 is PRIME

Input:  12
Output: 12 is COMPOSITE / NOT PRIME
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int flag = 1;

    if (n <= 1)
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << n << " is PRIME\n";
    }
    else
    {
        cout << n << " is COMPOSITE / NOT PRIME\n";
    }
    return 0;
}
