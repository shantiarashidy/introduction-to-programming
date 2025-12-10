// Write a program that receives the quiz scores of 30 students and 
// prints the number of people who received A,B,C,D,E grades.
// example : A,B,C,B,C,A,A ===> A : 3 | B : 2 | C : 2 | E = 0 

#include <iostream>
using namespace std;

int main()
{
    char q;
    int a, b, c, d, e;
    a = b = c = d = e = 0;
    for (int i = 0; i < 30; i++)
    {
        cout << "Please enter the score (A ,B ,C ,D ,E): ";
        cin >> q;

        switch (q)
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        case 'C':
            c++;
            break;
        case 'D':
            d++;
            break;
        case 'E':
            e++;
            break;
        default:
            cout << "ERROR : Your input score is wrong!";
            break;
        }
    }

    cout << "A : " << a << " | B : " << b << " | C : " << c << " | D : " << d << " | E : " << e;
}